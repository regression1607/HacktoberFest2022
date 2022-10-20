# For two given disjoint sets, A & B, if you like A and hate B :
# You enter a 3rd set C, for each element in C if it is in A, you add 1, and if it is in B you subtract one. Final value is shown as your happiness.
# Source : HackerRank > Prepare > PythonSets > No Idea!
# url : https://www.hackerrank.com/challenges/no-idea/problem?isFullScreen=true


n, m = map(int,input("Enter the size of two sets : ").split())
arr = [int(i) for i in input("Enter the set you want to check : ").split()]
A = set(int(i) for i in input("Enter the 1st set : ").split())
B = set(int(i) for i in input("Enter the 2nd set : ").split())
happiness = 0
for i in arr:
    if i in A and i not in B:
        happiness += 1
    elif i not in A and i in B:
        happiness -= 1
print("Your happiness is : ",happiness)
