// int main()
// // compute mean and median temperatures
// {
// vector<double> temps; // temperatures
// for (double temp; cin>>temp; ) // read into temp
// temps.push_back(temp); // put temp into vector
// // compute mean temperature:
// double sum = 0;
// for (double x : temps)
// sum += x;
// cout << "Average temperature: " << sum/temps.size() << '\n';
// // compute median temperature:
// rang es::sort(temps); // sor t the temperatures
// cout << "Median temperature: " << temps[temps.size()/2] << '\n';
// }