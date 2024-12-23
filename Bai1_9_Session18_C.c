//1.Viết chương trình khởi tạo cấu trúc sinh viên 
//có các thuộc tính name,age và phoneNumber. 
//Khai báo biến từ cấu trúc và gán giá trị cho biến đó.
// In biến ra màn hình sau khi khai báo. 
#include <stdio.h>
#include <string.h>

struct sv {
    char name[100];
    int age;
    char phoneNumber[20];
}sv = {"Tran Van A",23,"025627299122225"};
int main() {
    struct sv sinhvien = sv; 
    printf("Ten: %s\n", sinhvien.name);
    printf("Tuoi: %d\n", sinhvien.age);
    printf("So dien thoai: %s\n", sinhvien.phoneNumber);
    return 0;
}

 
#include<stdio.h>
//2. Viết chương trình khởi tạo cấu trúc sinh viên
//có các thuộc tính name, age và phoneNumber.
struct sv{
    char name[100];
    int age[5];
    char phoneNumber[16];
    //Khai báo biến từ cấu trúc và yêu cầu người dùng nhập
}struct sv nhap{
    printf("Nhap vao ten :");
    fgets(sv.name,sizeof(sv.name),stdin);
    strcspn(sv.name,"\n")='\0';
    printf("Nhap vao tuoi :");
    scanf("%d",&age);
    fflush(stdin);
    printf("Nhap vao so dien thoai :");
    fgets(sv.phoneNumber,sizeof(sv.phoneNumber),stdin);
    strcspn(sv.phoneNumber,"\n"),="\0";
}
int main(){
    //vào từng thuộc tính của biến. In biến ra màn hình sau khi nhập xong
    printf("Ten : %s",sv.name);
    printf("Tuoi : %d",sv.age);
    printf("So dien thoai : %s",sv.phoneNumber);
}



#include <stdio.h>
#include<string.h>

int main() {
    //3. Viết chương trình khởi tạo cấu trúc sinh viên
    // có các thuộc tính name, age và phoneNumber.
    struct sv {
        char name[50];
        int age [5];
        char phoneNumber[10];
    };
    // Khai báo mảng sinh viên có 5 phần tử và yêu cầu người dùng nhập
    struct sv n[5];
    for(int i = 1; i < 6; i++){
        //thông tin của từng sinh viên. 
        printf("Input name %d",i);
        fgets(n[i].name,sizeof(n[i].name),stdin);
        strcspn(n[i].name,"\n")='\0';
        printf("Input age of name %d:",i);
        scanf("%d",n[i].age);
        fflush(stdin);
        fgets(n[i].phoneNumber,sizeof(n[i].phoneNumer),stdin);
        strcspn(n[i].phoneNumber,"\n")='\0';
    }
    for(int i=1;i<6;i++){
        //Sau khi nhập xong thì in thông tin các sinh viên trong mảng.
        printf("Sinh vien %d",i);
        printf("%s\n",n[i].name);
        printf("%d\n",n[i].age);
        printf("%s\n",n[i].phoneNumber);
    }
}

//4. Viết chương trình khởi tạo cấu trúc sinh viên 
//có các thuộc tính id,name, age và phoneNumber.
// Khai báo mảng sinh viên có 5 phần tử 
//và yêu cầu người dùng nhập thông tin của từng sinh viên, 
//thuộc tính id không cần phải nhập mà sẽ tự động tăng bắt đầu từ 1.
// Sau khi nhập xong thì in thông tin các sinh viên trong mảng.

#include <stdio.h>

int main() {
    struct sv {
        int id;
        char name[50];
        int age[20];
        char phoneNumber[10];
    };
    struct sv n[4];
    for(int i = 0; i < 5; i++) {
        n[i].id = i + 1;
        printf("Input name(n %d): ", i + 1);
        fgets(n[i].name, sizeof(n[i].name), stdin);
        printf("Input Age(n %d): ", i + 1);
        scanf("%d", &n[i].age);
        getchar();
        printf("Input phone number(n %d): ", i + 1);
        fgets(n[i].phoneNumber, sizeof(n[i].phoneNumber), stdin);
        fflush(stdin);
    }
    for(int i = 0; i < 5; i ++) {
        printf("n id %d\n", n[i].id);
        printf("Name: %s", n[i].name);
        printf("Age: %d\n", n[i].age);
        printf("Phone number: %s\n", n[i].phoneNumber);
    }
}
//5. Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính
// id, name, age và phoneNumber. Khai báo mảng sinh viên có độ dài là 50 và có sẵn 5 phần tử. 
//Xây dựng tính năng sửa thông tin sinh viên. Cho người dùng nhập vào
// đại lượng id để tiến hành tìm kiếm sinh viên theo id.
// Nếu sinh viên tìm kiếm theo id không tồn tại trong mảng thì in thông báo
// không tìm thấy, nếu sinh viên tìm kiếm theo id tồn tại thì tiếp tục cho người dùng 
//chỉnh sửa giá trị của 2 thuộc tính name và age (Không sửa id). 
//In ra thông tin toàn bộ sinh viên có trong mảng sinh viên sau khi tiến hành chỉnh sửa.
#include<stdio.h>
#include<string.h>
struct Sv{
    int id;
    char name[50];
    int age;
    char phoneNumber[18];
};
struct Sv sv[50]={
    {1,"Tran Thi V",14,"120212112122"},
    {2,"Tran Van H",23,"242424531636"},
    {3,"Tran Thi N",18,"298492750274"},
    {4,"Le Thi N",18,"38929187404803"},
    {5,"Vu Thi N",18,"24249275927987"}
};
void find(struct Sv sv[],int n,int id){
    for(int i=0;i<n;i++){
        if(sv[i].id==id){
            return i;
        }
    }
    return -1;
}
int main(){
    struct Sv St;
    int n=5;
    int id;
    printf("Nhap vao id sv muon tim : ");
    scanf("%d",&id);
    int index = find(sv,n,id);
    if(index==-1){
        printf("khong tim thay id : %d cua sinh vien can tim",id);
    }else{
        printf("Thong tin cua sinh vien truoc khi sua la : ");
        printf("Id : %d\n",St[index].id);
        printf("Name : %s\n",St[index].name);
        printf("Age : %d\n",St[index].age);
        printf("Phone number : %s\n",St[index].phoneNumber);
        printf("Sua ten : ");
        getchar();
        fgets(St[index].name,sizeof(St[index].name,stdin));
        St[index].name[strcspn(St[index].name,"\n")]='\0';
        printf("Sua tuoi : ");
        scanf("%d",&St[index].age);
        for(int i=0;i<n;i++){
            printf("Thong tin sinh vien sau khi chinh c=sue la :");
            printf("Id : %d\n",St[index].id);
            printf("Name : %s\n",St[index].name);
            printf("Age : %d\n",St[index].age);
            printf("Phone number : %s\n",St[index].age);
        }
    }
    return 0;
}


//6. Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính 
//id, name, age và phoneNumber. Khai báo mảng sinh viên có độ dài là 50
//và có sẵn 5 phần tử. Xây dựng tính năng thêm sinh viên vào vị trí 
//cuối cùng của mảng sinh viên. Yêu cầu người dùng nhập thông tin
//sinh viên cần thêm và lưu lại vào mảng. Hiển thị ra toàn bộ
//thông tin của sinh viên có trong mảng sau khi thêm mới một sinh viên.
#include <stdio.h>
#include <string.h>

struct Sv {
    int id;
    char name[100];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Sv sv[50] = {
        {1, "Nguyễn Anh Minh", 18, "38924024"},
        {2, "Nguyễn Anh Phương", 18, "74090283"},
        {3, "Nguyễn Anh Tú", 18, "17773038"},
        {4, "Nguyễn Anh Quân", 18, "88207301"},
        {5, "Nguyễn Minh Quân", 18, "74702089"}
    };
    int n = 5; 
    printf("Current student information:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d  Name: %s  Age: %d  Phone Number: %s\n", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNumber);
    }
    printf("Input the information of the student to add:\n");
    printf("ID: ");
    scanf("%d", &sv[n].id); 
    getchar(); 
    printf("Name: ");
    fgets(sv[n].name, sizeof(sv[n].name), stdin);
    sv[n].name[strcspn(sv[n].name, "\n")] = '\0'; 
    printf("Age: ");
    scanf("%d", &sv[n].age); 
    getchar(); 
    printf("Phone Number: ");
    fgets(sv[n].phoneNumber, sizeof(sv[n].phoneNumber), stdin);
    sv[n].phoneNumber[strcspn(sv[n].phoneNumber, "\n")] = '\0'; 
    n++; 
    printf("\nUpdated student information:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d  Name: %s  Age: %d  Phone Number: %s\n", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNumber);
    }

    return 0;
}

//7.Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính 
//id, name, age và phoneNumber. Khai báo mảng sinh viên có độ dài 50 
//và có sẵn 5 phần tử. Xây dựng tính năng xoá sinh viên vào trong mảng 
//sinh viên. Yêu cầu người dùng nhập vào tên (name) sinh viên cần phải xoá.
// Tiến hành tìm kiếm sinh viên theo tên. Nếu sinh viên đó không tồn tại,
// thông báo không tồn tại. Nếu sinh viên đó có tồn tại, 
//tiền hành xoá sinh viên đó khỏi mảng.
#include<stdio.h>
#include<string.h>
struct Sv{
    int id;
    char name[50];
    int age;
    char phoneNumber[18];
};
int main(){
    int n =5;
    struct Sv sv[50];
        for(int i=0;i<n;i++){
            printf("Input information students %d :\n",i+1);
            printf("Input ID : ");
            scanf("%d",&sv[i].id);
            getchar();
            printf("Input name : ");
            fgets(sv[i].name,sizeof(sv[i].name),stdin);
            sv[i].name[strcspn(sv[i].name,"\n")]='\0';
            printf("Input age : ");
            scanf("%d",&sv[i].age);
            getchar();
            printf("Input phone number : ");
            fgets(sv[i].phoneNumber,sizeof(sv[i].phoneNumber),stdin);
            sv[i].phoneNumber[strcspn(sv[i].phoneNumber,"\n")]='\0';
        }
        printf("\n");
    printf("Information students current :\n ");
    for(int i=0;i<n;i++){
        printf("ID : %d , Name : %s , Age : %d , PhoneMumer : %s\n",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNumber);
    }
    printf("\n");
    printf("Input student need found follow name : ");
    char name[50];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int temp=-1;
    for(int i=0;i<n;i++){
        if(strcmp(sv[i].name,name)==0){
            temp=i;
            printf("Founed !!!");
            break;
        }
    }
    if(temp==-1){
    printf("Nhot found");
    }else{
        for(int i=temp;i<n;i++){
        sv[i]=sv[i+1];
        }
    n--;
    }
    ///////////
    printf("\n");
    printf("Information students after delete are : ");
    for(int i=0;i<n;i++){
        printf("ID : %d , Name : %s , Age : %d , PhoneMumer : %s",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNumber);
    }
    return 0;
}
//8. Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính 
//id, name, age và phoneNumber. Khai báo mảng sinh viên có độ dài là 50
//và có sẵn 5 phần tử. Xây dựng tính năng chèn sinh viên vào vị trí
//ngẫu nhiên trong mảng sinh viên. Yêu cầu người dùng nhập và vị trí 
//cần chèn và thông tin sinh viên cần thêm vào trong mảng. 
//Hiển thị ra toàn bộ thông tin của sinh viên có trong mảng 
//sau khi chèn một sinh viên
#include<stdio.h>
#include<string.h>
struct Sv{
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
int main(){
    int n = 5;
    struct Sv sv[50]={
        {1, "Nguyễn Anh Minh", 18, "38924024"},
        {2, "Nguyễn Anh Phương", 18, "74090283"},
        {3, "Nguyễn Anh Tú", 18, "17773038"},
        {4, "Nguyễn Anh Quân", 18, "88207301"},
        {5, "Nguyễn Minh Quân", 18, "74702089"}
    };
    printf("Infomation students curent are : \n");
    for(int i=0;i<n;i++){
        printf("Student %d : \n",i+1);
        printf("ID : %d , Name : %s , Age : %d , Phone Number : %s \n",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNumber);
    }
    printf("\n");
    int pos;
    printf("Input position need insert : ");
    scanf("%d",&pos);
    if(pos<0||pos>n){
        printf("\nPosition invalid ^ ^");
        return 0;                                                                   
    }else if(pos>=0 && pos<n){
        for(int i = n; i>=pos;i--){/////////////
        sv[i]=sv[i-1];
        }
    }
    printf("\nInput ID : ");
    scanf("%d",&sv[pos].id);
    printf("\nInput name : ");
    getchar();
    fgets(sv[pos].name,sizeof(sv[pos].name),stdin);
    sv[pos].name[strcspn(sv[pos].name,"\n")]='\0';
    printf("\nInput age : ");
    scanf("%d",&sv[pos].age);
    printf("\nInput Phone Number : ");
    getchar();
    fgets(sv[pos].phoneNumber,sizeof(sv[pos].phoneNumber),stdin);
    sv[pos].phoneNumber[strcspn(sv[pos].phoneNumber,"\n")]='\0';
    n++;
    printf("\n");
    for(int i=0;i<n;i++){
        printf("Student %d : \n",i+1);
        printf("ID : %d , Name : %s , Age : %d , Phone Number : %s \n",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNumber);
    }
    return 0;
}

//9
#include <stdio.h>
#include <string.h>

struct dish {
    int id;
    char name[100];
    float price;
};

struct dish menu[100] = {
    {1,"Cháo lươn",35},
    {2,"Thịt sườn",70},
    {3,"Bún bò",30},
    {4,"MiMi",50},
    {5,"Meme",65},
};

void printmenu(struct dish menu[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d. Name: %s, Price: %.3f VND\n", menu[i].id, menu[i].name, menu[i].price);
    }
}

int main() {
    while (1) {
        int choice, pos, n = 5;
        printf("\n=====MENU=====\n");
        printf("1. In ra menu\n");
        printf("2. Thêm món ăn\n");
        printf("3. Sửa món ăn\n");
        printf("4. Xóa món ăn\n");
        printf("5. Sắp xếp theo giá\n");
        printf("6. Tìm kiếm theo tên\n");
        printf("7. Thoát\n");
        printf("Your choice is : ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printmenu(menu, n);
                break;
            case 2:
                printf("Input position to add new (0 - %d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Invalid position\n");
                    break;
                }
                for (int i = n; i > pos; i--) {
                    menu[i] = menu[i - 1];
                }
                menu[pos].id = pos + 1; 
                printf("Input dish name: ");
                getchar(); 
                fgets(menu[pos].name, 100, stdin);
                menu[pos].name[strcspn(menu[pos].name, "\n")] = '\0';
                printf("Input price: ");
                scanf("%f", &menu[pos].price);
                n++;
                printf("Updated menu:\n");
                printmenu(menu, n);
                break;
            case 3:
                printf("Input position to edit (0-%d): ", n-1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position\n");
                    break;
                }
                printf("Edit dish name: ");
                getchar(); 
                fgets(menu[pos].name, 100, stdin);
                menu[pos].name[strcspn(menu[pos].name, "\n")] = '\0';
                printf("Edit price: ");
                scanf("%f", &menu[pos].price);
                printf("Updated menu:\n");
                printmenu(menu, n);
                break;
            case 4:
                printf("Input position to delete (0-%d): ", n-1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position\n");
                    break;
                }
                for (int i = pos; i < n - 1; i++) {
                    menu[i] = menu[i + 1];
                }
                n--;
                printf("Updated menu after deletion:\n");
                printmenu(menu, n);
                break;
            case 5:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (menu[j].price > menu[j + 1].price) {
                            struct dish temp = menu[j];
                            menu[j] = menu[j + 1];
                            menu[j + 1] = temp;
                        }
                    }
                }
                printf("Sorted menu by price:\n");
                printmenu(menu, n);
                break;
            case 6:
                {
                    char value[100];
                    printf("Input dish name to find: ");
                    getchar(); 
                    fgets(value, 100, stdin);
                    value[strcspn(value, "\n")] = '\0';
                    int found = 0;
                    for (int i = 0; i < n; i++) {
                        if (strcmp(menu[i].name, value) == 0) {
                            printf("Found at position: %d\n", i + 1);
                            printf("Dish found: ID: %d, Name: %s, Price: %.3f VND\n", menu[i].id, menu[i].name, menu[i].price);
                            found = 1;
                        }
                    }
                    if (!found) {
                        printf("Dish not found\n");
                    }
                }
                break;
            case 7:
                printf("Exit program\n");
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}
