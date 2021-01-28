#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <stack>

using namespace std;

int main() {
	stack<int> cardstack;
	int n;
	vector<int> card;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		card.push_back(temp);
	}
	cardstack.push(card[0]);
	for (int i = 1; i < n; i++)
	{
		//if top element of stack and next element in array is even
		if (!cardstack.empty()) {
			if ((card[i] + cardstack.top()) % 2 == 0) {
				cardstack.pop();
			}
			else {
				cardstack.push(card[i]);
			}
		}
		else {
			cardstack.push(card[i]);
		}
	}
	cout << cardstack.size();
	return (0);
}
