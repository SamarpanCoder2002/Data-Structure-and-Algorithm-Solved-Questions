# The provided code stub will read in a dictionary containing key/value pairs
# of name:[marks] for a list of students. Print the average of the marks array
# for the student name provided, showing 2 places after the decimal.

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    take = student_marks[query_name]
    length = len(take)
    s=0
    for x in take:
        s=s+x
    print(format(s/3,'.2f'))
