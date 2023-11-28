<?php

/**
 * This file is part of the Zephir.
 *
 * (c) Phalcon Team <team@zephir-lang.com>
 *
 * For the full copyright and license information, please view
 * the LICENSE file that was distributed with this source code.
 */

declare(strict_types=1);

namespace Zephir\Operators\Other;

use ReflectionException;
use Zephir\CompilationContext;
use Zephir\CompiledExpression;
use Zephir\Exception;
use Zephir\Exception\CompilerException;
use Zephir\Expression;
use Zephir\Operators\AbstractOperator;

/**
 * Adds a branch prediction hint when evaluating an expression
 */
class LikelyOperator extends AbstractOperator
{
    protected string $expressionName = 'EXPECTED';
    protected string $operatorName   = 'likely';

    /**
     * @param array              $expression
     * @param CompilationContext $compilationContext
     *
     * @return CompiledExpression
     *
     * @throws Exception
     * @throws ReflectionException
     */
    public function compile(array $expression, CompilationContext $compilationContext): CompiledExpression
    {
        if (!isset($expression['left'])) {
            throw new CompilerException(
                "Invalid 'left' operand for '" . $this->operatorName . "' expression",
                $expression['left']
            );
        }

        $leftExpr = new Expression($expression['left']);
        $leftExpr->setReadOnly(true);
        $left = $leftExpr->compile($compilationContext);

        if ('bool' === $left->getType()) {
            return new CompiledExpression(
                'bool',
                $this->expressionName . '(' . $left->getCode() . ')',
                $expression
            );
        }

        if ('variable' === $left->getType()) {
            $variable = $compilationContext->symbolTable->getVariableForRead(
                $left->getCode(),
                $compilationContext,
                $expression['left']
            );
            switch ($variable->getType()) {
                case 'bool':
                    return new CompiledExpression(
                        'bool',
                        $this->expressionName . '(' . $variable->getName() . ')',
                        $expression
                    );

                default:
                    $compilationContext->headersManager->add('kernel/operators');
                    $symbol = $compilationContext->backend->getVariableCode($variable);

                    return new CompiledExpression(
                        'bool',
                        $this->expressionName . '(zephir_is_true(' . $symbol . '))',
                        $expression
                    );
            }
        }

        throw new CompilerException(
            "Cannot use expression type: '"
            . $left->getType()
            . "' in '"
            . $this->operatorName
            . "' operator",
            $expression['left']
        );
    }
}
