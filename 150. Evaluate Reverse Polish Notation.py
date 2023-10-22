class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for token in tokens:
            if token == '+' or token == '-' or token == '/' or token == '*':
                op1 = stack.pop()
                op2 = stack.pop()
                if token == '+':
                    stack.append(op2 + op1)
                elif token == '-':
                    stack.append(op2 - op1)
                elif token == '/':
                    stack.append(int(op2 / op1))
                elif token == '*':
                    stack.append((op2 * op1))
            else:
                stack.append(int(token))
        return stack.pop()
                    
