def main():
    testCases = int(input())
    
    for i in range(testCases):
        
        n = input()
        one, zero = 0, 0

        for j in n:
            if j == '1':
                one += 1
            else:
                zero += 1
            
        if one == 1 or zero == 1:
            print("Yes")
        else:
            print("No")



if __name__ == "__main__":
    main()