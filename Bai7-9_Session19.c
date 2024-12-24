//7. Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính id, name, age và phoneNumber.
//Khai báo mảng sinh viên có 5 phần tử và gán giá trị cho mảng đã khai báo. 
//Xây dựng hàm xóa sinh viên có hai tham số là id sinh viên và mảng sinh viên. 
//Hàm sẽ kiểm tra xem trong mảng có tồn tại sinh viên hay không, nếu có thì 
//tiến hành xóa sinh viên, nếu không thì in ra thông báo. 
//Gọi hàm để xóa sinh viên, sau khi xóa xong thì in mảng sinh viên ra màn hình để kiểm tra.
//Gợi ý: logic tương tự như xóa phần tử khỏi mảng thông thường
//•	Sau khi nhập số phần tử ban đầu thì cần lưu lại số lượng phần tử hiện có 
//trong mảng. Có thể đặt tên biến là currentLength.
//•	Vị trí muốn xóa cần nằm trong khoảng từ 0 - currentLength, nếu nhập sai thì thông báo không hợp lệ
//•	Khi xóa thì di chuyển tất cả các phần tử phía sau vị trí cần xóa giảm đi 1 chỉ số và giảm currentLength đi 1
#include<stdio.h>
#include<string.h>
typedef struct{
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
}Sv; 
    
int delete(Sv sv[],int *n,int id){
    int pos = -1;
    for(int i=0;i<*n;i++){
        if(sv[i].id==id){
        pos = i;
        printf("Founed ^ ^");
        }
    }
    pos = -1;
    if(pos == -1){
        printf("Not founed !!!");
        return 0;
    }else{
        for(int i=0; i<*n-1;i++){
            sv[i]=sv[i+1];
        }
        (*n)--;
    }
}
void print(Sv sv[],int n){
    for(int i=0;i<n;i++){
        printf("ID : %d , Name : %s , Age : %d , Phone Number : %s",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNumber);
    }
}

int main(){
    int n = 5;
    int id;
    Sv sv[50];
        for(int i=0;i<n;i++){
            printf("Input Student Information %d :\n",i+1);
            printf("Input ID :");
            scanf("%d",&sv[i].id);
            getchar();
            printf("\nInput Name : ");
            fgets(sv[i].name,sizeof(sv[i].name),stdin);
            sv[i].name[strcspn(sv[i].name,"\n")]='\0';
            printf("\nInput Age : ");
            scanf("%d",&sv[i].age);
            getchar();
            printf("\nInput Phone Number : ");
            fgets(sv[i].phoneNumber,sizeof(sv[i].phoneNumber),stdin);
            sv[i].phoneNumber[strcspn(sv[i].phoneNumber,"\n")]='\0';
        }
    printf("\n");
    printf("Begin list students : \n");
    print(sv,n);
    printf("\n");
    printf("Input ID student need delete :");
    scanf("%d",&id);
    delete(sv,&n,id);
    printf("\n");
    printf("List students after delete are : ");
    print(sv,n);
    return 0;
}

//8. Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính
//id, name, age và phoneNumber. Khai báo mảng sinh viên có 5 phần tử 
//và gán giá trị cho mảng đã khai báo. Xây dựng hàm sắp xếp sinh viên 
//có tham số là mảng sinh viên. Hàm sẽ tiến hành sắp xếp lại mảng
//sinh viên theo tên sinh viên. Gọi hàm để  sắp xếp sinh viên,
//in mảng sinh viên ra màn hình để kiểm tra.
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
} student;

void arrange(student sv[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(sv[j].name, sv[j + 1].name) > 0) {
                student temp = sv[j];
                sv[j] = sv[j + 1];
                sv[j + 1] = temp;
            }
        }
    }
}

void print(student *sv, int n) {
    printf("\nList of students:\n");
    printf("------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Id: %d\n", sv[i].id);
        printf("Name: %s\n", sv[i].name);
        printf("Age: %d\n", sv[i].age);
        printf("Phone Number: %s\n", sv[i].phoneNumber);
        printf("------------------------------------\n");
    }
}

int main() {
    int n = 5; 
    student sv[5];
    for (int i = 0; i < n; i++) {
        printf("Input information of student %d:\n", i + 1);
        printf("Input id: ");
        scanf("%d", &sv[i].id);
        getchar();
        printf("Input name: ");
        fgets(sv[i].name, 50, stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';
        printf("Input age: ");
        scanf("%d", &sv[i].age);
        getchar();
        printf("Input phone number: ");
        fgets(sv[i].phoneNumber, 20, stdin);
        sv[i].phoneNumber[strcspn(sv[i].phoneNumber, "\n")] = '\0';
        printf("\n");
    }
    arrange(sv, n);
    print(sv, n);
    return 0;
}

//9.
#include <stdio.h>
#include <string.h>

struct Sv {
    int id;
    char name[100];
    int  age;
};

struct Sv sv[100] = {
    {1,"N Van A",35},
    {2,"Tran Van C",70},
    {3,"Nguyen D",30},
    {4,"Tran D",50},
    {5,"Nguyen Ao",65},
};

void printsv(struct Sv sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d. ID: %d, Name : %s, Age : %d\n", sv[i].id, sv[i].name, sv[i].age);
    }
}

int main() {
    while (1) {
        int choice, pos, n = 5;
        printf("\n=====sv=====\n");
        printf("1.	Hiển thị danh sách sinh viên\n");
        printf("2.	Thêm sinh viên\n");
        printf("3.	Sửa thông tin sinh viên\n");
        printf("4.	Xóa sinh viên\n");
        printf("5.	Tìm kiếm sinh viên\n");
        printf("6.	Sắp xếp danh sách sinh viên\n");
        printf("7. Thoát\n");
        printf("Your choice is : ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printsv(sv, n);
                break;
            case 2:
                printf("Input position to add new (0 - %d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Invalid position\n");
                    break;
                }
                for (int i = n; i > pos; i--) {
                    sv[i] = sv[i - 1];
                }
                sv[pos].id = pos + 1; 
                printf("Input Sv name: ");
                getchar();
                fgets(sv[pos].name, 100, stdin);
                sv[pos].name[strcspn(sv[pos].name, "\n")] = '\0';
                printf("Input age: ");
                scanf("%f", &sv[pos].price);
                n++;
                printf("After change sv:\n");
                printsv(sv, n);
                break;
            case 3:
                printf("Input position to edit (0-%d): ", n-1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position\n");
                    break;
                }
                printf("Edit Sv name: ");
                getchar(); 
                fgets(sv[pos].name, 100, stdin);
                sv[pos].name[strcspn(sv[pos].name, "\n")] = '\0';
                printf("Edit price: ");
                scanf("%f", &sv[pos].price);
                printf("After change sv:\n");
                printsv(sv, n);
                break;
            case 4:
                printf("Input position to delete (0-%d): ", n-1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position\n");
                    break;
                }
                for (int i = pos; i < n - 1; i++) {
                    sv[i] = sv[i + 1];
                }
                n--;
                printf("sv after deletion:\n");
                printsv(sv, n);
                break;
            case 5:
                char value[100];
                printf("Input Sv name to find: ");
                getchar(); 
                fgets(value, 100, stdin);
                value[strcspn(value, "\n")] = '\0';
                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (strcmp(sv[i].name, value) == 0) {
                        printf("Found at position: %d\n", i + 1);
                        printf("Sv found: ID: %d, Name: %s, Age: %d \n", sv[i].id, sv[i].name, sv[i].age);
                        found = 1;
                        }
                    }
                    if (!found) {
                        printf("Sv not found\n");
                    }
                break;
                
            case 6:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (sv[j].name > sv[j + 1].name) {
                            struct Sv temp = sv[j];
                            sv[j] = sv[j + 1];
                            sv[j + 1] = temp;
                        }
                    }
                }
                printf("After sv angeed is :\n");
                printsv(sv, n);
                break;
            case 7:
                printf("Exit \n");
                return 0;
            default:
                printf("Invalid ^ ^ \n");
                break;
        }
    }
}