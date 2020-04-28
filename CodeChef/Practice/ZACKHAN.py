def gcd(a,b):
    return a if b == 0 else gcd(b,a%b)

def main():
    tc = int(input())
    for i in range(tc):
        l, b = list(map(int, input().split()))
        print(gcd(l,b))

if __name__ == "__main__":
    main()