#include "TitleSceneActor.h"
#include "input.h"
#include "ImageManager.h"
#include "ParticleEmitter.h"
//初期化
void TitleSceneActor::Initialize(DirectXCommon* dxCommon, DebugCamera* camera, LightGroup* lightgroup) {
	//共通の初期化
	BaseInitialize(dxCommon);
	dxCommon->SetFullScreen(true);
}
//更新
void TitleSceneActor::Update(DirectXCommon* dxCommon, DebugCamera* camera, LightGroup* lightgroup) {
	camerawork->Update(camera);
}
//描画
void TitleSceneActor::Draw(DirectXCommon* dxCommon) {
	//ポストエフェクトをかけるか
	if (PlayPostEffect) {
		postEffect->PreDrawScene(dxCommon->GetCmdList());
		BackDraw(dxCommon);
		FrontDraw();
		postEffect->PostDrawScene(dxCommon->GetCmdList());
		dxCommon->PreDraw();
		postEffect->Draw(dxCommon->GetCmdList());
		//ImGuiDraw(dxCommon);
		dxCommon->PostDraw();
	} else {
		postEffect->PreDrawScene(dxCommon->GetCmdList());
		postEffect->Draw(dxCommon->GetCmdList());
		postEffect->PostDrawScene(dxCommon->GetCmdList());
		dxCommon->PreDraw();
		BackDraw(dxCommon);
		FrontDraw();
		//ImGuiDraw(dxCommon);
		dxCommon->PostDraw();
	}
}
//前面描画
void TitleSceneActor::FrontDraw() {
}
//背面描画
void TitleSceneActor::BackDraw(DirectXCommon* dxCommon) {
}
//ImGui描画
void TitleSceneActor::ImGuiDraw(DirectXCommon* dxCommon) {
}
//解放
void TitleSceneActor::Finalize() {
}
