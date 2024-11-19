        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            char topCh = pop();
            if ((ch == ')' && topCh != '(') ||
                (ch == '}' && topCh != '{') ||
                (ch == ']' && topCh != '[')) {
                return 0; // Invalid syntax
            }
        }
    }

    return top == NULL; // If stack is empty, syntax is valid
}

int main() {
    char expr[] = "int main() { if (x == 10) { return 1; } }";
    if (isValidSyntax(expr)) {
        printf("Valid syntax\n");
    } else {
        printf("Invalid syntax\n");
    }
    return 0;
}
