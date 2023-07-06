x = randn(10000, 1);
numOfBins = 100;
[histFreq, histXout] = hist(x, numOfBins);
binWidth = histXout(2)-histXout(1);
figure;
bar(histXout, histFreq/binWidth/sum(histFreq));       
hold on
