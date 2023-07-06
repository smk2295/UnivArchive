clear all;

N=100;

m=1;

v=2;

X = sqrt(v)*randn(1,N)+m;

h = histogram(X, 50, 'Normalization', 'pdf');

ycoords = h.Values;
edgecoords = h.BinEdges;
xcoords = (edgecoords(1:end-1)+edgecoords(2:end))./2;
plot(xcoords, ycoords); hold on