package org.jruby.ir.instructions;

import org.jruby.ir.IRScope;
import org.jruby.ir.transformations.inlining.CloneInfo;

/**
 * This represents a linenumber instr that has been inlined into another method/closure.
 * It's purpose is to record the scope so that if we are debugging we can know where this
 * instr originally came from.
 */
public class InlinedLineNumberInstr extends LineNumberInstr {
    private final IRScope scope;

    public InlinedLineNumberInstr(IRScope scope, int lineNumber) {
        super(lineNumber);

        this.scope = scope;
    }

    @Override
    public Instr clone(CloneInfo ii) {
        return this;  // Always retain the scope it originally came from
    }

    public IRScope getScope() {
        return scope;
    }
}
