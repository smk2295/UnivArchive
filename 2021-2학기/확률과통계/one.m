STD = 1;
MEAN = 2;
x = -4:0.1:4;
f = (   1/(STD*sqrt(2*pi))   )  *  exp(-0.5*((x-MEAN)/STD).^2  );

hold on; plot (x,f);