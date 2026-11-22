#include <string>
#include <vector>

void vector_reverse() {
    std::vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    std::vector<int> rev;
    for (std::size_t i = values.size(); i > 0; --i) rev.push_back(values[i - 1]);
    (void)rev;
}

void absolute_diff() {
    int a = 41, b = 90;
    int diff = (a > b) ? (a - b) : (b - a);
    (void)diff;
}

void text_length() {
    std::string text = "cascade";
    std::size_t n = text.size();
    (void)n;
}

void vector_max() {
    std::vector<int> values;
    values.push_back(11);
    values.push_back(29);
    values.push_back(7);
    int best = values[0];
    for (std::size_t i = 1; i < values.size(); ++i) {
        if (values[i] > best) best = values[i];
    }
    (void)best;
}

extern "C" int vivid_haven();
extern "C" void subtle_kite();
extern "C" void sable_hollow();
extern "C" void cobalt_willow();

int main() {
    vector_reverse();
    absolute_diff();
    text_length();
    vector_max();
    subtle_kite();
    sable_hollow();
    cobalt_willow();
    return vivid_haven();
}
