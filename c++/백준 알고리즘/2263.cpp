#include <cstdio>
// 순회의 종류(Traversal) 3가지
// 전위 순회(Preorder Traversal)
// 루트노드 -> 왼쪽 자식 노드 -> 오른쪽 자식 노드  : 루 L R
// 중위 순회(Inorder Traversal)
// 왼쪽 자식 노드 -> 루트 노드 -> 오른쪽 자식 노드 : L 루 R
// 후위 순회(Postorder Traversal)
// 왼쪽 자식 노드 -> 오른쪽 자식 노드 -> 부모 노드 : L R 루
// 포스트오더의 가장 마지막은 루트이다.
using namespace std;

int inorder[100001];
int postorder[100001];
int position[100001]; // postion[i], i번 정점이 인오더에서 몇 번째이지 check

void solve(int in_start, int in_end, int post_start, int post_end)
{
    if (in_start > in_end || post_start > post_end)
        return;
    int root = postorder[post_end]; // postorder의 끝은 서브루트 or 루트노드이다.
    printf("%d ", root);
    int p = position[root]; // 인오더에서 루트의 위치

    // inorder : in_start p in_end
    // postorder : post_start post_end
    // left : p-in_start , 왼쪽 자식의 수
    // right : in_end - p, 오른쪽 자식의 수

    int left = p - in_start;
    solve(in_start, p - 1, post_start, post_start + left - 1);
    solve(p + 1, in_end, post_start + left, post_end - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &inorder[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &postorder[i]);
    for (int i = 0; i < n; i++)
    {
        position[inorder[i]] = i;
    }

    solve(0, n - 1, 0, n - 1);
    return 0;
}