A = randn(1000,1)
[pdf,X] = hist(A(:),500);
resol=X(2)-X(1);
PDF_gaussian=pdf./1000.^2.*resol);
figure(1),bar(X,PDF_gaussian)