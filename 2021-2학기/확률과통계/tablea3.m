clear all;

x = 1;

%x의 범위에 따라 식이 다르므로 if문을 사용한다.
if x>=0
    p = 0.5 + 0.5*erf(x/sqrt(2));    
else 
    p = 0.5 - 0.5*erf(-x/sqrt(2));
end

fprintf ('%f',p);