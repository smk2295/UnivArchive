clear all;

n = 10;  
p = 0.3; 
r = 3; 
s = 0; %누적합을 위한 변수

%for문을 사용해 시그마를 계산한다.
for k=0:r
    b = nchoosek(n,k)*p^k*(1-p)^(n-k);
    s = s + b;
end

fprintf ('%f',s);

