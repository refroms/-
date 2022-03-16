#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct student {
	char name[20];
	char gender[20];
	int score[4];
} st;

class Student {
	public:
		void Initialize();
		void Add();
		void Delete();
		void Modify();
		void Sort();
		void Search();
		void Munu();
		void shown();
	private:
		st list[100], tmp;
		int i = 0, j = 0, grade[100], sum = 0, temp = 0, f;
		char cname[20];
};
int static count = 0;

void Student::Initialize() {
	cout << "input the student information:" << endl;
	cout << "if you want to end inputing please input 'end ' at the same line" << endl;
	while ( i < 100) {
		sum = 0;
		cin.getline(list[i].name, 20, ' ');
		if (strcmp(list[i].name, "end") == 0) {
			break;
		}
		cin.getline(list[i].gender, 20, ' ');
		for (j = 0; j < 4; j++) {
			scanf("%d ", &list[i].score[j]);
		}
		for (j = 0; j < 4; j++) {
			sum = sum + list[i].score[j];
		}
		grade[i] = sum;
		i++;
		count++;
	}
}

void Student::Add() {
	while ( i < 100) {
		i = count;
		sum = 0;
		cin.getline(list[i].name, 20, ' ');
		if (strcmp(list[i].name, "end") == 0) {
			break;
		}
		cin.getline(list[i].gender, 20, ' ');
		for (j = 0; j < 4; j++) {
			scanf("%d ", &list[i].score[j]);
		}
		for (j = 0; j < 4; j++) {
			sum = sum + list[i].score[j];
		}
		grade[i] = sum;
		i++;
		count++;
	}
}

void Student::shown() {
	for (i = 0; i < count; i++) {
		cout << list[i].name << " ";
		cout << list[i].gender << " ";
		for (j = 0; j < 4; j++) {
			printf("%d  ", list[i].score[j]);
		}
		printf("%d\n", grade[i]);
	}
}

void Student::Delete() {
	cout << "how many lines do you want to delete?" << endl;
	cin >> f;
	count = count - f;
	for (i = 0; i < count; i++) {
		cout << list[i].name << " ";
		cout << list[i].gender << " ";
		for (j = 0; j < 4; j++) {
			printf("%d  ", list[i].score[j]);
		}
		printf("%d\n", grade[i]);
	}
}

void Student::Sort() {
	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {
			if (grade[j] < grade[i]) {
				temp = grade[j];
				grade[j] = grade[i];
				grade[i] = temp;
				tmp = list[i];           //����������������������
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
	for (i = 0; i < count; i++) {
		cout << list[i].name << " ";
		cout << list[i].gender << " ";
		for (j = 0; j < 4; j++) {
			printf("%d  ", list[i].score[j]);
		}
		printf("%d\n", grade[i]);
	}
}

void Student::Search() {
	cout << "please input the name you want!" << endl;
	scanf("%s", &cname);
	f = 0;
	for (f = 0; f < count; f++) {
		if (strcmp(cname, list[f].name) == 0) {
			cout << "found the name at " << f + 1 << endl;
			cout << list[f].name << " ";
			cout << list[f].gender << " ";
			for (j = 0; j < 4; j++) {
				printf("%d  ", list[f].score[j]);
			}
			printf("%d\n", grade[f]);
		}
	}
}

void Student::Munu() {
	cout << " \t\t\t\t**********************************************" << endl;
	cout << " \t\t\t\t*              ѧ���ɼ�����ϵͳ              *" << endl;
	cout << " \t\t\t\t*                                            *" << endl;
	cout << " \t\t\t\t*                   �˵�                     *" << endl;
	cout << " \t\t\t\t*                                            *" << endl;
	cout << " \t\t\t\t*          1. ��������ѧ����Ϣ               *" << endl;
	cout << " \t\t\t\t*          2. �������ѧ����Ϣ               *" << endl;
	cout << " \t\t\t\t*          3. ����ѧ����Ϣ                   *" << endl;
	cout << " \t\t\t\t*          4. ɾ��ѧ����Ϣ�����������µ��ϣ� *" << endl;
	cout << " \t\t\t\t*          5. ��ѯѧ����Ϣ(������)           *" << endl;
	cout << " \t\t\t\t*          6. �޸�ѧ���ɼ�                   *" << endl;
	cout << " \t\t\t\t*          7. ���ܷ�����                     *" << endl;
	cout << " \t\t\t\t**********************************************" << endl;
	cout << endl;
}

void Student::Modify() {
	cout << "please input the name you want!" << endl;
	scanf("%s", &cname);
	f = 0;
	for (f = 0; f < count; f++) {
		if (strcmp(cname, list[f].name) == 0) {
			cout << "found the name at " << f + 1 << endl;
			cout << list[f].name << " ";
			cout << list[f].gender << " ";
			for (j = 0; j < 4; j++) {
				printf("%d  ", list[f].score[j]);
			}
			printf("%d\n", grade[f]);
			break;
		}
	}
	cout << "Please enter the course you wish to modify(����) " << endl;
	scanf("%d", &i);
	i = i - 1;
	cout << "Please enter the grade you wish to modify(����) " << endl;
	scanf("%d", &list[f].score[i]);
	cout << list[f].name << " ";
	cout << list[f].gender << " ";
	for (j = 0; j < 4; j++) {
		printf("%d  ", list[f].score[j]);
	}
	for (j = 0; j < 4; j++) {
		sum = sum + list[f].score[j];
	}
	grade[f] = sum;
	printf("%d\n", grade[f]);
}

int main() {
	Student a;
	a.Munu();
	int b = 0;
	cout << "if you want to quit please enter -1" << endl;
	while (b != -1) {
		cout << "please enter operation you want(����)" << endl;
		scanf("%d", &b);
		switch (b) {
			case 1:
				printf("1. ��������ѧ����Ϣ\n");
				a.Initialize();
				a.Munu();
				break;
			case 2:
				printf("2. �������ѧ����Ϣ\n");
				a.shown();
				a.Munu();
				break;
			case 3:
				printf("3. ����ѧ����Ϣ\n");
				a.Add();
				a.Munu();
				break;
			case 4:
				printf("4. ɾ��ѧ����Ϣ�����������µ��ϣ�\n");
				a.Delete();
				a.Munu();
				break;
			case 5:
				printf("5. ��ѯѧ����Ϣ(������)\n");
				a.Search();
				a.Munu();
				break;
			case 6:
				printf("6. �޸�ѧ���ɼ�\n");
				a.Modify();
				a.Munu();
				break;
			case 7:
				printf("7. ���ܷ�����\n");
				a.Sort();
				a.Munu();
				break;
			default:
				printf("error\n");
				break;
		}
	}
	return 0;
}