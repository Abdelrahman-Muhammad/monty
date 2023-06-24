def push(stack, line_number, argument):
    try:
        value = int(argument)
    except ValueError:
        print(f"L{line_number}: usage: push integer")
        exit(1)

    stack.append(value)

def pall(stack):
    for value in stack[::-1]:
        print(value)
