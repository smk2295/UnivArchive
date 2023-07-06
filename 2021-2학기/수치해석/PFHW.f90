	logical is_palindromic
	logical is_prime, is_palind

	lim = 94444
	j = 11
	do k = j, lim, 2
	  lsq = sqrt(float(k)) + 0.001
	  is_prime = .true.
	  i = 3
	  do while (is_prime .and. i <= lsq)
	    if(mod(k, i) == 0) is_prime = .false.
	    i = i + 2
	  enddo
	  if(is_prime) then
	    is_palind = is_palindromic(k)
	    if(is_palind) write(*, *) k, 'is a palindromic prime number'
	  endif

	enddo


	stop
	end

	logical function is_palindromic(k)
	integer digits(10)

	j = log10(float(k)) + 1
	l = 10
	ks = k
	digits(j) = mod(k, l)
	do n = j-1, 1, -1
	  ks = ks/10
	  digits(n) = mod(ks, 10)
        enddo


	jh = j/2
	i = 1
	is_palindromic = .true.
	do while (is_palindromic .and. i <= jh)
	  if(digits(i) .ne. digits(j-i+1)) is_palindromic = .false.
	  i = i + 1
        enddo

	return
	end

! first output 11
! last number  929  Total 16 numbers

	real*8 function A1norm(A, M, N)
	dimension A(M, *)

	rmax = -1.
	do j = 1, N
	  sum = 0.
	  do i = 1, M
	    sum = sum + abs(A(i,j))
	  enddo
	  if(sum > rmax) rmax = sum
        enddo

	A1norm = rmax

	return
	end






