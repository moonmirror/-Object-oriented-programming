#include "iostream"
using namespace std;

struct complex
{
	float s;
	float x;
};

void add(struct complex m, struct complex n)
{
	struct complex t;
	t.s = m.s + n.s;
	t.x = m.x + n.x;
	if (t.s != 0 && t.x < 0)
		cout << t.s << t.x << "i" << endl;
	else if (t.s != 0 && t.x > 0)
		cout << t.s << "+" << t.x << "i" << endl;
	else if (t.s != 0 && t.x == 0)
		cout << t.s << endl;
	else if (t.s == 0 && t.x != 0)
		cout << t.x << "i" << endl;
}

void substruction(struct complex m, struct complex n)
{
	struct complex t;
	t.s = m.s - n.s;
	t.x = m.x - n.x;
	if (t.s != 0 && t.x < 0)
		cout << t.s << t.x << "i" << endl;
	else if (t.s != 0 && t.x > 0)
		cout << t.s << "+" << t.x << "i" << endl;
	else if (t.s != 0 && t.x == 0)
		cout << t.s << endl;
	else if (t.s == 0 && t.x != 0)
		cout << t.x << "i" << endl;
}

void multiplication(struct complex m, struct complex n)
{
	struct complex t;
	t.s = m.s * n.s - m.x * n.x;
	t.x = m.x * n.s + m.s + n.x;
	if (t.s != 0 && t.x < 0)
		cout << t.s << t.x << "i" << endl;
	else if (t.s != 0 && t.x > 0)
		cout << t.s << "+" << t.x << "i" << endl;
	else if (t.s != 0 && t.x == 0)
		cout << t.s << endl;
	else if (t.s == 0 && t.x != 0)
		cout << t.x << "i" << endl;
}

void division(struct complex m, struct complex n)
{
	struct complex t;
	t.s = (m.s * n.s + m.x * n.x) / (n.s * n.s + n.x * n.x);
	t.x = (m.x * n.s - m.s * n.x) / (n.s * n.s + n.x * n.x);
	if (t.s != 0 && t.x < 0)
		cout << t.s << t.x << "i" << endl;
	else if (t.s != 0 && t.x > 0)
		cout << t.s << "+" << t.x << "i" << endl;
	else if (t.s != 0 && t.x == 0)
		cout << t.s << endl;
	else if (t.s == 0 && t.x != 0)
		cout << t.x << "i" << endl;
}
int main()
{
	cout << "Please select the type of operation(+,-,*,/):";
	char a;
	cin >> a;
	cout << "Please enter the real and imaginary parts of the first plural:";
	struct complex m, n;
	cin >> m.s >> m.x;
	cout << "Please enter the real and imaginary parts of the second plural:";
	cin >> n.s >> n.x;
	cout << "The result is:";
	if (a == '+')
		add(m, n);
	else if (a == '-')
		substruction(m, n);
	else if (a == '*')
		multiplication(m, n);
	else if (a == '/')
		division(m, n);
	return 0;
}