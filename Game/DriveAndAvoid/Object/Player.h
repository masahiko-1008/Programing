#pragma oncce

#include "../Utility/Vector2D.h"
#include "Barrier.h"

class Player
{
private:
	bool is_active;     //�L����Ԃ��H
	int image;          //�摜�f�[�^
	Vector2D location;  //�ʒu���W
	Vector2D box_size;  //�����蔻��̑傫��
	float angle;        //�p�x
	float speed;        //����
	float hp;           //�̗�
	float fuel;         //�R��
	int barrier_count;  //�o���A�̖���
	Barrier* barrier;   //�o���A

public:
	Player();
	~Player();

	void Initialize();  //����������
	void Update();      //�X�V����
	void Draw();        //�`�揈��
	void Finalize();    //�I��������

public:
	void SetActive(bool flg);      //�L���t���O�ݒ�
	void DereaseHp(float value);   //�̗͌�������
	Vector2D Get 
};