import math

def main():
    tc = int(input())
    for i in range(tc):
        n = int(input())
        SQRTN = int(math.sqrt(n))
        isPosi = 0
        for j in range(SQRTN,0,-1):
            if n%j == 0 and (j + n//j)%2 == 0 and j != n//j:
                print(((n//j - j)//2)**2)
                isPosi = 1
                break
        
        if isPosi == 0:
            print(-1)

if __name__ == "__main__":
    main()