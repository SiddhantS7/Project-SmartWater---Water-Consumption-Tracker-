#include <iostream>
#include <vector>
using namespace std;

// Recommended water usage (in liters per activity)
struct WaterUsage {
    string activity;
    double usage;
};

vector<WaterUsage> recommendations = {
    {"Drinking", 3},
    {"Cooking", 5},
    {"Bathing", 30},
    {"Cleaning", 10},
    {"Laundry", 20}
};

double get_user_input(string activity) {
    double amount;
    cout << "Enter water usage for " << activity << " (liters): ";
    cin >> amount;
    return amount;
}

void calculate_water_usage() {
    double total_usage = 0, recommended_total = 0;
    
    cout << "\n🌍 Welcome to SmartWater - Water Consumption Tracker 💧\n";
    cout << "---------------------------------------------------\n";

    for (auto &item : recommendations) {
        double usage = get_user_input(item.activity);
        total_usage += usage;
        recommended_total += item.usage;
    }

    cout << "\n📊 Your Total Daily Water Usage: " << total_usage << "L\n";
    cout << "🌱 Recommended Sustainable Limit: " << recommended_total << "L\n";

    if (total_usage <= recommended_total) {
        cout << "✅ Great job! You're using water sustainably. Keep it up! 🌿\n";
    } else {
        cout << "⚠️ Your water consumption is high. Try reducing usage with these tips:\n";
        cout << "   - Take shorter showers 🚿\n   - Use a bucket instead of running water for cleaning 🧼\n   - Fix leaks and use water-efficient appliances 💧\n";
    }
}

int main() {
    calculate_water_usage();
    return 0;
}
