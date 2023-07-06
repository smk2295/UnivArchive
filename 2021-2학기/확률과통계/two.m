y = randn(10000,1) + 2;
x = -4:0.1:6;

n = hist(y,x);

bar (x,n);

MEAN = mean(y)
STD = sqrt(mean((y - MEAN).^2))


f = (   1/(STD*sqrt(2*pi))   )  *  exp(-0.5*((x-MEAN)/STD).^2  );
f = f*sum(n)/sum(f);

plot (x,f, 'r', 'LineWidth', 2); hold on;

STD = 1;
MEAN = 2;
x = -4:6;
z = (   1/(STD*sqrt(2*pi))   )  *  exp(-0.5*((x-MEAN)/STD).^2  );

hold on; plot (x,z);