#include "Player.h"
#include "CsvLoader.h"
#include "Helper.h"
#include "Input.h"
#include "Easing.h"
#include "Collision.h"
Player* Player::GetInstance()
{
	static Player instance;

	return &instance;
}
//リソース読み込み
void Player::LoadResource() {

}
//初期化
bool Player::Initialize()
{
	LoadCSV();


	//CSV読み込み
	return true;
}
//CSV読み込み
void Player::LoadCSV() {
}
//ステータスの初期化
void Player::InitState(const XMFLOAT3& pos) {
	m_Position = pos;
	m_Rotation = { 0.0f,0.0f,0.0f };
	m_Color = { 1.0f,1.0f,1.0f,1.0f };
}

//更新処理
void Player::Update()
{
}
//描画
void Player::Draw(DirectXCommon* dxCommon)
{
}

//ImGui
void Player::ImGuiDraw() {
}
