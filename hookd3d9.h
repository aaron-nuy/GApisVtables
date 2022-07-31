#pragma once
#include <Windows.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <array>

#pragma comment (lib,"d3d9.lib")
#pragma comment (lib,"d3dx9.lib")

#pragma region
#define _d3d9QueryInterface 0   
#define _d3d9AddRef 1   
#define _d3d9Release 2   
#define _d3d9TestCooperativeLevel 3   
#define _d3d9GetAvailableTextureMem 4   
#define _d3d9EvictManagedResources 5   
#define _d3d9GetDirect3D 6   
#define _d3d9GetDeviceCaps 7   
#define _d3d9GetDisplayMode 8   
#define _d3d9GetCreationParameters 9   
#define _d3d9SetCursorProperties 10  
#define _d3d9SetCursorPosition 11  
#define _d3d9ShowCursor 12  
#define _d3d9CreateAdditionalSwapChain 13  
#define _d3d9GetSwapChain 14  
#define _d3d9GetNumberOfSwapChains 15  
#define _d3d9Reset 16  
#define _d3d9Present 17  
#define _d3d9GetBackBuffer 18  
#define _d3d9GetRasterStatus 19  
#define _d3d9SetDialogBoxMode 20  
#define _d3d9SetGammaRamp 21  
#define _d3d9GetGammaRamp 22  
#define _d3d9CreateTexture 23  
#define _d3d9CreateVolumeTexture 24  
#define _d3d9CreateCubeTexture 25  
#define _d3d9CreateVertexBuffer 26  
#define _d3d9CreateIndexBuffer 27  
#define _d3d9CreateRenderTarget 28  
#define _d3d9CreateDepthStencilSurface 29  
#define _d3d9UpdateSurface 30  
#define _d3d9UpdateTexture 31  
#define _d3d9GetRenderTargetData 32  
#define _d3d9GetFrontBufferData 33  
#define _d3d9StretchRect 34  
#define _d3d9ColorFill 35  
#define _d3d9CreateOffscreenPlainSurface 36  
#define _d3d9SetRenderTarget 37  
#define _d3d9GetRenderTarget 38  
#define _d3d9SetDepthStencilSurface 39  
#define _d3d9GetDepthStencilSurface 40  
#define _d3d9BeginScene 41  
#define _d3d9EndScene 42  
#define _d3d9Clear 43  
#define _d3d9SetTransform 44  
#define _d3d9GetTransform 45  
#define _d3d9MultiplyTransform 46  
#define _d3d9SetViewport 47  
#define _d3d9GetViewport 48  
#define _d3d9SetMaterial 49  
#define _d3d9GetMaterial 50  
#define _d3d9SetLight 51  
#define _d3d9GetLight 52  
#define _d3d9LightEnable 53  
#define _d3d9GetLightEnable 54  
#define _d3d9SetClipPlane 55  
#define _d3d9GetClipPlane 56  
#define _d3d9SetRenderState 57  
#define _d3d9GetRenderState 58  
#define _d3d9CreateStateBlock 59  
#define _d3d9BeginStateBlock 60  
#define _d3d9EndStateBlock 61  
#define _d3d9SetClipStatus 62  
#define _d3d9GetClipStatus 63  
#define _d3d9GetTexture 64  
#define _d3d9SetTexture 65  
#define _d3d9GetTextureStageState 66  
#define _d3d9SetTextureStageState 67  
#define _d3d9GetSamplerState 68  
#define _d3d9SetSamplerState 69  
#define _d3d9ValidateDevice 70  
#define _d3d9SetPaletteEntries 71  
#define _d3d9GetPaletteEntries 72  
#define _d3d9SetCurrentTexturePalette 73  
#define _d3d9GetCurrentTexturePalette 74  
#define _d3d9SetScissorRect 75  
#define _d3d9GetScissorRect 76  
#define _d3d9SetSoftwareVertexProcessing 77  
#define _d3d9GetSoftwareVertexProcessing 78  
#define _d3d9SetNPatchMode 79  
#define _d3d9GetNPatchMode 80  
#define _d3d9DrawPrimitive 81  
#define _d3d9DrawIndexedPrimitive 82  
#define _d3d9DrawPrimitiveUP 83  
#define _d3d9DrawIndexedPrimitiveUP 84  
#define _d3d9ProcessVertices 85  
#define _d3d9CreateVertexDeclaration 86  
#define _d3d9SetVertexDeclaration 87  
#define _d3d9GetVertexDeclaration 88  
#define _d3d9SetFVF 89  
#define _d3d9GetFVF 90  
#define _d3d9CreateVertexShader 91  
#define _d3d9SetVertexShader 92  
#define _d3d9GetVertexShader 93  
#define _d3d9SetVertexShaderConstantF 94  
#define _d3d9GetVertexShaderConstantF 95  
#define _d3d9SetVertexShaderConstantI 96  
#define _d3d9GetVertexShaderConstantI 97  
#define _d3d9SetVertexShaderConstantB 98  
#define _d3d9GetVertexShaderConstantB 99  
#define _d3d9SetStreamSource 100 
#define _d3d9GetStreamSource 101 
#define _d3d9SetStreamSourceFreq 102 
#define _d3d9GetStreamSourceFreq 103 
#define _d3d9SetIndices 104 
#define _d3d9GetIndices 105 
#define _d3d9CreatePixelShader 106 
#define _d3d9SetPixelShader 107 
#define _d3d9GetPixelShader 108 
#define _d3d9SetPixelShaderConstantF 109 
#define _d3d9GetPixelShaderConstantF 110 
#define _d3d9SetPixelShaderConstantI 111 
#define _d3d9GetPixelShaderConstantI 112 
#define _d3d9SetPixelShaderConstantB 113 
#define _d3d9GetPixelShaderConstantB 114 
#define _d3d9DrawRectPatch 115 
#define _d3d9DrawTriPatch 116 
#define _d3d9DeletePatch 117 
#define _d3d9CreateQuery 118 
#pragma endregion

namespace apihooks {
	static HWND hWnd = nullptr;

	BOOL CALLBACK EnumWindowsCallback(HWND handle, LPARAM lParam) {
		DWORD windowPid = 0;
		GetWindowThreadProcessId(handle, &windowPid);

		if (GetCurrentProcessId() == windowPid) {
			hWnd = handle;
			return false;
		}

		return true;
	}
	HWND& GetProcessWindow() {
		hWnd = nullptr;

		EnumWindows(EnumWindowsCallback, 0);

		return hWnd;
	}

	namespace d3d9 {
		static constexpr uint16_t nvfuncs = 119;
		static std::array<void*, nvfuncs> deviceVMT = { 0 };

		BOOL FillVMT() {
			IDirect3D9* pD3D = Direct3DCreate9(D3D_SDK_VERSION);

			IDirect3DDevice9* pDummyDevice = nullptr;

			D3DPRESENT_PARAMETERS params = { 0 };
			params.Windowed = false;
			params.SwapEffect = D3DSWAPEFFECT_DISCARD;
			params.hDeviceWindow = GetProcessWindow();

			if (pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, params.hDeviceWindow, D3DCREATE_HARDWARE_VERTEXPROCESSING, &params, &pDummyDevice) != S_OK) {

				params.Windowed = !params.Windowed;
				if (pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, params.hDeviceWindow, D3DCREATE_HARDWARE_VERTEXPROCESSING, &params, &pDummyDevice) != S_OK) {
					pD3D->Release();
					return false;
				}
			}

			memcpy(deviceVMT.data(), *(void*)pDummyDevice, deviceVMT.size()*sizeof(void*));

			pD3D->Release();
			pDummyDevice->Release();
			return true;
		}

	}
}
