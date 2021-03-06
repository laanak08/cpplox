#pragma once

// Related header
// C standard headers
// C++ standard headers
#include <string>
// Third-party headers
// This project's headers
#include "expression_visitor.hpp"

namespace motts { namespace lox {
    class Ast_printer : public Expr_visitor {
        public:
            void visit(const Binary_expr*) override;
            void visit(const Grouping_expr*) override;
            void visit(const Literal_expr*) override;
            void visit(const Unary_expr*) override;

            const std::string& result() const &;
            std::string&& result() &&;

        private:
            std::string result_;
    };
}}
