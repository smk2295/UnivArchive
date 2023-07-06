Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> import math
>>> def primeSieve(sieveSize):
	# creating Sieve (0~n까지의 slot)
	sieve = [True] * (sieveSize+1)
	# 0과 1은 소수가 아니므로 제외
	sieve[0] = False
	sieve[1] = False
	# 2부터 (루트 n) + 1까지의 숫자를 탐색
	for i in range(2,int(math.sqrt(sieveSize))+1):
		# i가 소수가 아니면 pass
		if sieve[i] == False:
			continue
		# i가 소수라면 i*i~n까지 숫자 가운데 i의 배수를
		# 소수에서 제외
		for pointer in range(i**2, sieveSize+1, i):
			sieve[pointer] = False
	primes = []
	# sieve 리스트에서 True인 것이 소수이므로
	# True인 값의 인덱스를 결과로 저장
	for i in range(sieveSize+1):
		if sieve[i] == True:
			primes.append(i)
	return primes

>>> def get_prime_factors(n):
	# n 범위 내의 소수를 구한다
	primelist = primeSieve(n)
	# 이 소수들 중 n으로 나누어 떨어지는
	# 소수를 구하고, 몇 번 나눌 수 있는지 계산
	# 예 : n = 8, factors = [(2, 3)]
	# 예 : n = 100, fcount = [(2: 2), (5: 2)]
	factors = []
	for p in primelist:
		count = 0
		while n % p == 0:
			n /= p
			count += 1
		if count > 0:
			factors.append((p, count))
	return factors

>>> get_prime_factors(36)
[(2, 2), (3, 2)]
>>> 