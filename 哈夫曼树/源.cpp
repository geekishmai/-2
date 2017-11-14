//#include <stdio.h>
//#include <malloc.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//#define HuffmanTree HF
//#define HuffmanCode HMC
//typedef struct
//{
//	unsigned int weight;
//	unsigned int parent, lchild, rchild;
//} HTNode, *HF;
//typedef char **HMC;
//typedef struct {
//	unsigned int s1;
//	unsigned int s2;
//} MinCode;
//void Error(char *message);
//HMC HuffmanCoding(HF HT, HMC HC, unsigned int *w, unsigned int n);
//MinCode Select(HF HT, unsigned int n);
//void Error(char *message)
//{
//	fprintf(stderr, "Error:%s\n", message);
//	exit(1);
//}
//HMC HuffmanCoding(HF HT, HMC HC, unsigned int *w, unsigned int n)
//{
//	unsigned int i, s1 = 0, s2 = 0;
//	HF p;
//	char *cd;
//	unsigned int f, c, start, m;
//	MinCode min;
//	if (n <= 1) Error("Code too small!");
//	m = 2 * n - 1;
//	HT = (HF)malloc((m + 1) * sizeof(HTNode));
//	for (p = HT, i = 0; i <= n; i++, p++, w++)
//	{
//		p->weight = *w;
//		p->parent = 0;
//		p->lchild = 0;
//		p->rchild = 0;
//	}
//
//	for (; i <= m; i++, p++)
//	{
//		p->weight = 0;
//		p->parent = 0;
//		p->lchild = 0;
//		p->rchild = 0;
//	}
//	for (i = n + 1; i <= m; i++)
//	{
//		min = Select(HT, i - 1);
//		s1 = min.s1;
//		s2 = min.s2;
//		HT[s1].parent = i;
//		HT[s2].parent = i;
//		HT[i].lchild = s1;
//		HT[i].rchild = s2;
//		HT[i].weight = HT[s1].weight + HT[s2].weight;
//	}
//	printf("HT List:\n");
//	printf("Number\t\tweight\t\tparent\t\tlchild\t\trchild\n");
//	for (i = 1; i <= m; i++)
//		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
//			i, HT[i].weight, HT[i].parent, HT[i].lchild, HT[i].rchild);
//	HC = (HMC)malloc((n + 1) * sizeof(char *));
//	cd = (char *)malloc(n * sizeof(char *));
//	cd[n - 1] = '\0';
//	for (i = 1; i <= n; i++)
//	{
//		start = n - 1;
//		for (c = i, f = HT[i].parent; f != 0; c = f, f = HT[f].parent)
//			if (HT[f].lchild == c) cd[--start] = '0';
//			else cd[--start] = '1';
//			HC[i] = (char *)malloc((n - start) * sizeof(char *));
//			strcpy(HC[i], &cd[start]);
//	}
//	free(cd);
//	return HC;
//}
//void main()
//
//{
//	MinCode Select(HF HT, unsigned int n);
//	HF HT = NULL;
//	HuffmanCode HC = NULL;
//	unsigned int *w = NULL;
//	unsigned int i, n;
//	printf("请输入节点数n:");
//	scanf("%d", &n);
//	w = (unsigned int *)malloc((n + 1) * sizeof(unsigned int *));
//	w[0] = 0;
//	printf("请输入权重:\n");
//	for (i = 1; i <= n; i++)
//	{
//		printf("w[%d]=", i);
//		scanf("%d", &w[i]);
//	}
//	HC = HuffmanCoding(HT, HC, w, n);
//	printf("HMC:\n");
//	printf("Number\t\tWeight\t\tCode\n");
//	for (i = 1; i <= n; i++)
//		printf("%d\t\t%d\t\t%s\n", i, w[i], HC[i]);
//}
//
//
//
//MinCode Select(HF HT, unsigned int n)
//
//{
//
//	unsigned int min, secmin;
//
//	unsigned int temp;
//
//	unsigned int i, s1, s2, tempi;
//
//	MinCode code;
//
//	s1 = 1; s2 = 1;
//
//	for (i = 1; i <= n; i++)
//
//		if (HT[i].parent == 0)
//
//		{
//
//			min = HT[i].weight;
//
//			s1 = i;
//
//			break;
//
//		}
//
//	tempi = i++;
//
//	for (; i <= n; i++)
//
//		if (HT[i].weight<min&&HT[i].parent == 0)
//
//		{
//
//			min = HT[i].weight;
//
//			s1 = i;
//
//		}
//
//	for (i = tempi; i <= n; i++)
//
//		if (HT[i].parent == 0 && i != s1)
//
//		{
//
//			secmin = HT[i].weight;
//
//			s2 = i;
//
//			break;
//
//		}
//
//	for (i = 1; i <= n; i++)
//
//		if (HT[i].weight<secmin&&i != s1&&HT[i].parent == 0)
//
//		{
//
//			secmin = HT[i].weight;
//
//			s2 = i;
//
//		}
//
//	if (s1>s2)
//
//	{
//
//		temp = s1;
//
//		s1 = s2;
//
//		s2 = temp;
//
//	}
//
//	code.s1 = s1;
//
//	code.s2 = s2;
//
//	return code;
//}

 // 手动操作拼图
//#include <stdlib.h> 
//#include <stdio.h> 
//#include <conio.h> 
//
//void GameInfo(void);
//int IsWin(int a[3][3]);
//int FindZero(int a[3][3]);
//int LocationY(int zero);
//void PrintMatrix(int a[3][3]);
//int UpdateMatrix(int a[3][3]);
//
//void GameInfo(void)
//{
//	printf("Play Game by WASD.\n");
//}
//
//int IsWin(int a[3][3])
//{
//	int flag = 0, i, j, RightNum = 1;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (a[i][j] == RightNum)
//			{
//				if (RightNum == 8 && a[2][1] == 8)
//				{
//					flag = 1;
//					PrintMatrix(a);
//					printf("You Win! :)\nPress any key to exit.\n");
//					getch();
//					exit(-1);
//					return flag;
//				}
//				++RightNum;
//				continue;
//			}
//			else
//				return flag;
//		}
//	}
//	return flag;
//}
//
//void PrintMatrix(int a[3][3])
//{
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int FindZero(int a[3][3])
//{
//	int i, j, counter = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			counter++;
//			if (a[i][j] == 0)
//			{
//				return counter;
//				break;
//			}
//		}
//	}
//	return counter;
//}
//
//int LocationY(int zero)
//{
//	if (zero <= 3)
//		return 1;
//	else if (zero <= 6)
//		return 2;
//	else
//		return 3;
//}
//
//int UpdateMatrix(int a[3][3])
//{
//	char move;
//	int zero = FindZero(a);
//	int zeroy = LocationY(zero) - 1;
//	int zerox = (zero - 1) % 3;
//	int temp;
//
//	move = getch();
//	switch (move)
//	{
//	case 97: //A:left 
//	{
//		if (zerox == 0)
//			printf("Input Error.");
//		else if (!(zerox == 0)) //第一列无法向左 
//		{
//			temp = a[zeroy][zerox];
//			a[zeroy][zerox] = a[zeroy][zerox - 1];
//			a[zeroy][zerox - 1] = temp;
//		}
//		break;
//	}
//	case 119: //W:up 
//	{
//		if (zeroy == 0)
//			printf("Input Error.");
//		else if (!(zeroy == 0)) //第一行无法向上 
//		{
//			temp = a[zeroy][zerox];
//			a[zeroy][zerox] = a[zeroy - 1][zerox];
//			a[zeroy - 1][zerox] = temp;
//		}
//		break;
//	}
//	case 100: //D:right 
//	{
//		if (zerox == 2)
//			printf("Input Error.");
//		else if (!(zerox == 2)) //第三列无法向右 
//		{
//			temp = a[zeroy][zerox];
//			a[zeroy][zerox] = a[zeroy][zerox + 1];
//			a[zeroy][zerox + 1] = temp;
//		}
//		break;
//	}
//	case 115: //S:down 
//	{
//		if (zeroy == 2)
//			printf("Input Error.");
//		else if (!(zeroy == 2)) //第三行无法向下 
//		{
//			temp = a[zeroy][zerox];
//			a[zeroy][zerox] = a[zeroy + 1][zerox];
//			a[zeroy + 1][zerox] = temp;
//		}
//		break;
//	}
//	default:
//	{
//		printf("Input Error.\n");
//	}
//	}
//	return a[0][0];
//}
//
//int main(void)
//{
//	int a[3][3] = { { 6, 1, 4 },{ 2, 0, 8 },{ 5, 7, 3 } };
//
//	while (!IsWin(a))
//	{
//		system("cls");
//		GameInfo();
//		PrintMatrix(a);
//		a[0][0] = UpdateMatrix(a);
//	}
//
//	return 0;
//}


# ifndef CLK_TCK
# define CLK_TCK CLOCKS_PER_SEC
# endif

#include <cstdio>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>

#define TESRCASE 100000
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

struct State {
	int direction, diff_manhattan;
	State(int i, int dis) {
		this->direction = i;
		this->diff_manhattan = dis;
	}
	bool operator<(const State &s) const {
		return diff_manhattan > s.diff_manhattan;
	}
};

double eight_digits_problem_time;
double eight_queens_problem_time;
int eight_digits_problem_failed_times;
int eight_queens_problem_failed_times;
int diff_manhattan_distance;

inline void swap(int *a, int *b) {
	*a ^= *b ^= *a ^= *b;
}

inline bool solved(int *state) {
	for (int i = 0; i < 8; i++)
		if (state[i] != i + 1)
			return false;
	return true;
}

inline int manhattan_distance(int num, int position) {
	int dest_x = ceil(num / 3), dest_y = (num - 1) % 3 + 1, position_x = ceil(position / 3), position_y = (position - 1) % 3 + 1;
	return abs(dest_x - position_x) + abs(dest_y - position_y);
}

bool eight_digits_better(int *state, int position, int direction) {
	switch (direction) {
	case UP:
		if (position <= 3)
			return false;
		else {
			diff_manhattan_distance = manhattan_distance(state[position - 4], position - 3) - manhattan_distance(state[position - 4], position);
			return manhattan_distance(state[position - 4], position - 3) > manhattan_distance(state[position - 4], position);
		}
	case DOWN:
		if (position >= 7)
			return false;
		else {
			diff_manhattan_distance = manhattan_distance(state[position + 2], position + 3) - manhattan_distance(state[position + 2], position);
			return manhattan_distance(state[position + 2], position + 3) > manhattan_distance(state[position + 2], position);
		}
	case LEFT:
		if (position % 3 == 1)
			return false;
		else {
			diff_manhattan_distance = manhattan_distance(state[position - 2], position - 1) - manhattan_distance(state[position - 2], position);
			return manhattan_distance(state[position - 2], position - 1) > manhattan_distance(state[position - 2], position);
		}
	case RIGHT:
		if (position % 3 == 0)
			return false;
		else {
			diff_manhattan_distance = manhattan_distance(state[position], position + 1) - manhattan_distance(state[position], position);
			return manhattan_distance(state[position], position + 1) > manhattan_distance(state[position], position);
		}
	}
	return false;
}

void solve_one_case_of_8_digits_problem(int *state) {
	clock_t start_time = clock();
	int position, i;
	bool found;
	for (i = 0; i < 9; i++)
		if (state[i] == 0) {
			position = i + 1;
			break;
		}
	while (!solved(state)) {
		found = false;
		std::vector<State> v;
		for (i = 0; i < 4; i++) {
			if (eight_digits_better(state, position, i)) {
				found = true;
				v.push_back(State(i, diff_manhattan_distance));
			}
			if (i == 3 && found) {
				std::sort(v.begin(), v.end());
				switch (v[0].direction) {
				case UP:
					swap(&state[position - 1], &state[position - 4]), position -= 3;
					break;
				case DOWN:
					swap(&state[position - 1], &state[position + 2]), position += 3;
					break;
				case LEFT:
					swap(&state[position - 1], &state[position - 2]), position--;
					break;
				case RIGHT:
					swap(&state[position - 1], &state[position]), position++;
					break;
				}
			}
		}
		if (!found) {
			eight_digits_problem_failed_times++;
			return;
		}
	}
	eight_digits_problem_time += (double)(clock() - start_time) / CLK_TCK;
}

void solve_8_digits_problem() {
	FILE *fp = fopen("testcase_8_digits_problem", "r");
	int original_state[9];
	while (fscanf(fp, "%d %d %d %d %d %d %d %d %d", original_state, original_state + 1, original_state + 2, original_state + 3, original_state + 4, original_state + 5, original_state + 6, original_state + 7, original_state + 8) != EOF)
		solve_one_case_of_8_digits_problem(original_state);
	fclose(fp);
}

int peers_of_attacking_queens(int *state) {
	int peers = 0, i, j, k;
	for (i = 0; i < 7; i++) {
		for (j = i + 1; j < 8; j++)
			if (state[j] == state[i])
				peers++;
		for (j = i + 1, k = state[i] + 1; j < 8 && k <= 8; j++, k++)
			if (state[j] == k)
				peers++;
		for (j = i + 1, k = state[i] - 1; j < 8 && k >= 1; j++, k--)
			if (state[j] == k)
				peers++;
	}
	return peers;
}

void solve_one_case_of_8_queens_problem(int *state) {
	clock_t start_time = clock();
	int h = peers_of_attacking_queens(state), i, j, best_i, best_j, temp, record;
	while (h != 0) {
		best_i = -1;
		for (i = 1; i <= 8; i++) {
			record = state[i - 1];
			for (j = 1; j <= 8; j++) {
				if (j != record) {
					state[i - 1] = j;
					temp = peers_of_attacking_queens(state);
					if (temp < h)
						h = temp, best_i = i, best_j = j;
				}
			}
			state[i - 1] = record;
		}
		if (best_i == -1) {
			eight_queens_problem_failed_times++;
			return;
		}
		state[best_i - 1] = best_j;
	}
	eight_queens_problem_time += (double)(clock() - start_time) / CLK_TCK;
}

void solve_8_queens_problem() {
	FILE *fp = fopen("testcase_8_queens_problem", "r");
	int original_state[8];
	while (fscanf(fp, "%d %d %d %d %d %d %d %d", original_state, original_state + 1, original_state + 2, original_state + 3, original_state + 4, original_state + 5, original_state + 6, original_state + 7) != EOF)
		solve_one_case_of_8_queens_problem(original_state);
	fclose(fp);
}

void print_result() {
	printf("eight digits problem average solved times: %lf\n", eight_digits_problem_time / (double)(TESRCASE - eight_digits_problem_failed_times));
	printf("eight digits problem solved rate: %lf\n", 1 - double(eight_digits_problem_failed_times) / TESRCASE);
	printf("eight queens problem average solved times: %lf\n", eight_queens_problem_time / (double)(TESRCASE - eight_queens_problem_failed_times));
	printf("eight queens problem solved rate: %lf\n", 1 - double(eight_queens_problem_failed_times) / TESRCASE);
}

int main() {
	eight_digits_problem_time = 0;
	eight_queens_problem_time = 0;
	eight_digits_problem_failed_times = 0;
	eight_queens_problem_failed_times = 0;
	solve_8_digits_problem();
	solve_8_queens_problem();
	print_result();
	return 0;
}
