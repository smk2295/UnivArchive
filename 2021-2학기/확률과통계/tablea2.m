clear all;

mu = 10;   
r = 3; 
s = 0; %누적합을 위한 변수

%for문을 사용해 시그마를 계산한다.
for x=0:r
    p = exp(-mu)*mu^x/factorial(x);
    s = s + p;
end

fprintf ('%f',s);