#include "stdafx.h"
#include "Boss.h"
//////////////////////////////////////////////////////////////////////
// Task
// ���ű���� �� ������ �Ѿ��� �߻�Ǿ� �� 
// ��������Ʈ ��� �� �Ŀ���, ��ǿ� �´� �࿭ ��ȣ ¥�����ϱ� (��> �ȱ� : 1 1, 2 3, 5 7 ... �̷� ��)
//////////////////////////////////////////////////////////////////////
// Boss ��������Ʈ (�ӻ��� ���� ���� ���ű���� Gatling Gull)
// �� ���� �� �Ʒ� ���� ���� 0�� 1�� 
// startX, startY, endX, endY ��
//////////////////////////////////////////////////

// 0 0 ����
// 1, 921, 99, 1023

// 0 1
// 99, 945, 204, 1023

// 0 2
// 204, 949, 285, 1023

// 0 3
// 289, 956, 355, 1023

// 0 4
// 357, 963, 416, 1023

// 0 5
// 418, 977, 493, 1023

// 0 6
// 495, 978, 568, 1023

// 0 7
// 570, 979, 630, 1023

// 0 8
// 632, 980, 691, 1023

// 0 9
// 693, 981, 753, 1023

// 0 10
// 755, 988, 821, 1023

//////////////////////////////////////////////////

// 1 0 ���ű���� ����� �� �Ʒ� 
// 0, 811, 77, 919

// 1 1
// 79, 825, 166, 919

// 1 2
// 168, 856, 265, 919

// 1 3
// 267, 872, 331, 947

// 1 4
// 333, 893, 392, 953

// 1 5
// 394, 913, 466, 961

// 1 6
// 468, 928, 541, 975

// 1 7
// 543, 933, 606, 976

// 1 8
// 608, 934, 667, 977

// 1 9
// 669, 933, 727, 978

// 1 10
// 729, 933, 785, 979

//////////////////////////////////////////////////

// 2 0 ���ű���� ���� ��� ����
// 222, 817, 292, 854

// 2 1
// 295, 822, 368, 870

// 2 2
// 370, 832, 429, 891

// 2 3
// 431, 846, 484, 911

// 2 4
// 486, 853, 532, 926

// 2 5
// 534, 886, 604, 926

// 2 6
// 606, 888, 667, 931

// 2 7
// 669, 889, 727, 931

//////////////////////////////////////////////////

// 3 0 ���ű���� ���� ����
// 1, 715, 48, 772   

// 3 1
// 125, 742, 170, 809

// 3 2
// 172, 740, 242, 814

// 3 3
// 244, 755, 303, 815

// 3 4
// 305, 760, 364, 820       

// 3 5
// 366, 766, 431, 820

// 3 6
// 433, 771, 480, 844

// 3 7
// 482, 776, 528, 844

// 3 8
// 530, 793, 575, 856

// 3 9
// 577, 827, 624, 884  

// 3 10
// 626, 831, 673, 886

// 3 11
// 675, 832, 721, 887

//////////////////////////////////////////////////

// 4 0 ���ű���� �� ���λ��� �������� ����� ���ø�
// 577, 777, 631, 825

// 4 1
// 633, 784, 690, 829

//////////////////////////////////////////////////

// 5 0 ���ű���� ���� ��ġ�� �� �ؿ� ����� ��
//







//////////////////////////////////////////////////////////////////////