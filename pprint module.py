from primetext import primelist
primenumber = primelist()

def factor():
    result = []
    for i in primenumber:
        count = 0
        while n%i == 0:
            count +=1
            n = int(n/i)
        if count !=0:
            result.append((i, count))
        if n == 1:
            break
    return result

if __name__=="__main__":
    number - int(input("소인수 분해할 숫자를 입력하시오"))
    print(factor(number))