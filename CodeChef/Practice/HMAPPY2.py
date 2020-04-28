def gcd(a,b):
    return a if b == 0 else gcd(b,a%b)

def lcm(a,b):
    return a*b//gcd(a,b)

def main():
    tc = int(input())
    for i in range(tc):
        n, a, b, k = list(map(int, input().split()))
        print("Win" if (n//a + n//b - 2*(n//lcm(a,b))) >= k else "Lose")

if __name__ == "__main__":
    main()