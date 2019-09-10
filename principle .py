# 정기예금은 24, 이율 6% 382년 후 원리금

#term_diposit = 24
#interest_rate = 0.06
#investment_period = 382
print("원리금 계산 법 프로그램입니다.")
term_diposit = float(input("원금을 입력하시오"))
interest_rate = float(input("이율을 입력하시오"))
investment_period = int(input("년을 입력하시오"))

principle = term_diposit * (1 + interest_rate)**investment_period
print("당신의 원리금은",principle,"입니다")