% Histogram for binomial random variables

clear all;

n_trials = 10;  % Number of trials
p = 0.3; % Probablity that each trial has the value of one 
n_samples = 100; % Number of samples for plotting histogram

for i=1:n_samples
    sample(i) = binornd(n_trials,p);
end

n_occurrences = zeros(n_trials+1,1);
for i=1:n_samples
   for j=0:n_trials
      if sample(i)==j
         n_occurrences(j+1) = n_occurrences(j+1)+1; 
      end
   end
end

for j=0:n_trials
    relative_freq(j+1) = n_occurrences(j+1)/n_samples;
end

%plot histogram
plot([0:1:n_trials], relative_freq, 'b*-');
hold on;

%plot probability distribution
for j=0:n_trials
    prob(j+1) = nchoosek(n_trials,j)*p^j*(1-p)^(n_trials-j);
end

plot([0:1:n_trials], prob, 'r*:');

%calculate sample mean 
sum = 0;
for i=1:n_samples
    sum = sum+sample(i);
end
sample_mean = sum/n_samples
mean = n_trials*p

%calculate sample variance
sum = 0;
for i=1:n_samples
    sum = sum+(sample(i)-sample_mean)^2;
end
sample_variance= sum/(n_samples-1)
variance = n_trials*p*(1-p)


