k=0:0.01:1;
v=k./sqrt(2.5.^2+(31.218+k.^2.*0.032).^2);
plot(k,v)
xlabel('k')
ylabel('V2')