idealmu=0;
idealsg=1;

realmu=mean(randn(100,1))
realsg=std(randn(100,1))

x=linspace(idealmu-4*idealsg,idealmu+4*idealsg,200);
pdfx=1/sqrt(2*pi)/idealsg*exp(-(x-idealmu).^2/(2*idealsg^2));
plot(x,pdfx);


mu=mean(data);
sg=std(data);
x=linspace(mu-4*sg,mu+4*sg,200);
pdfx=1/sqrt(2*pi)/sg*exp(-(x-mu).^2/(2*sg^2));
plot(x,pdfx);