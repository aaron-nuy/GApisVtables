#pragma once
#include <Windows.h>
#include <d3d10_1.h>
#include <d3d10.h>
#include <array>

#pragma comment (lib,"d3d10.lib")
#pragma comment (lib,"d3d10_1.lib")

#pragma region
#define _d3d10_SC_QueryInterface 0   
#define _d3d10_SC_AddRef 1   
#define _d3d10_SC_Release 2   
#define _d3d10_SC_SetPrivateData 3   
#define _d3d10_SC_SetPrivateDataInterface 4   
#define _d3d10_SC_GetPrivateData 5   
#define _d3d10_SC_GetParent 6   
#define _d3d10_SC_GetDevice 7   
#define _d3d10_SC_Present 8   
#define _d3d10_SC_GetBuffer 9   
#define _d3d10_SC_SetFullscreenState 10  
#define _d3d10_SC_GetFullscreenState 11  
#define _d3d10_SC_GetDesc 12  
#define _d3d10_SC_ResizeBuffers 13  
#define _d3d10_SC_ResizeTarget 14  
#define _d3d10_SC_GetContainingOutput 15  
#define _d3d10_SC_GetFrameStatistics 16  
#define _d3d10_SC_GetLastPresentCount 17  


#define _d3d10_D_QueryInterface 0  
#define _d3d10_D_AddRef 1  
#define _d3d10_D_Release 2  
#define _d3d10_D_VSSetConstantBuffers 3  
#define _d3d10_D_PSSetShaderResources 4  
#define _d3d10_D_PSSetShader 5  
#define _d3d10_D_PSSetSamplers 6  
#define _d3d10_D_VSSetShader 7  
#define _d3d10_D_DrawIndexed 8  
#define _d3d10_D_Draw 9  
#define _d3d10_D_PSSetConstantBuffers 10  
#define _d3d10_D_IASetInputLayout 11  
#define _d3d10_D_IASetVertexBuffers 12  
#define _d3d10_D_IASetIndexBuffer 13  
#define _d3d10_D_DrawIndexedInstanced 14  
#define _d3d10_D_DrawInstanced 15  
#define _d3d10_D_GSSetConstantBuffers 16  
#define _d3d10_D_GSSetShader 17  
#define _d3d10_D_IASetPrimitiveTopology 18  
#define _d3d10_D_VSSetShaderResources 19  
#define _d3d10_D_VSSetSamplers 20  
#define _d3d10_D_SetPredication 21  
#define _d3d10_D_GSSetShaderResources 22  
#define _d3d10_D_GSSetSamplers 23  
#define _d3d10_D_OMSetRenderTargets 24  
#define _d3d10_D_OMSetBlendState 25  
#define _d3d10_D_OMSetDepthStencilState 26  
#define _d3d10_D_SOSetTargets 27  
#define _d3d10_D_DrawAuto 28  
#define _d3d10_D_RSSetState 29  
#define _d3d10_D_RSSetViewports 30  
#define _d3d10_D_RSSetScissorRects 31  
#define _d3d10_D_CopySubresourceRegion 32  
#define _d3d10_D_CopyResource 33  
#define _d3d10_D_UpdateSubresource 34  
#define _d3d10_D_ClearRenderTargetView 35  
#define _d3d10_D_ClearDepthStencilView 36  
#define _d3d10_D_GenerateMips 37  
#define _d3d10_D_ResolveSubresource 38  
#define _d3d10_D_VSGetConstantBuffers 39  
#define _d3d10_D_PSGetShaderResources 40  
#define _d3d10_D_PSGetShader 41  
#define _d3d10_D_PSGetSamplers 42  
#define _d3d10_D_VSGetShader 43  
#define _d3d10_D_PSGetConstantBuffers 44  
#define _d3d10_D_IAGetInputLayout 45  
#define _d3d10_D_IAGetVertexBuffers 46  
#define _d3d10_D_IAGetIndexBuffer 47  
#define _d3d10_D_GSGetConstantBuffers 48  
#define _d3d10_D_GSGetShader 49  
#define _d3d10_D_IAGetPrimitiveTopology 50  
#define _d3d10_D_VSGetShaderResources 51  
#define _d3d10_D_VSGetSamplers 52  
#define _d3d10_D_GetPredication 53  
#define _d3d10_D_GSGetShaderResources 54  
#define _d3d10_D_GSGetSamplers 55  
#define _d3d10_D_OMGetRenderTargets 56  
#define _d3d10_D_OMGetBlendState 57  
#define _d3d10_D_OMGetDepthStencilState 58  
#define _d3d10_D_SOGetTargets 59  
#define _d3d10_D_RSGetState 60  
#define _d3d10_D_RSGetViewports 61  
#define _d3d10_D_RSGetScissorRects 62  
#define _d3d10_D_GetDeviceRemovedReason 63  
#define _d3d10_D_SetExceptionMode 64  
#define _d3d10_D_GetExceptionMode 65  
#define _d3d10_D_GetPrivateData 66  
#define _d3d10_D_SetPrivateData 67  
#define _d3d10_D_SetPrivateDataInterface 68  
#define _d3d10_D_ClearState 69  
#define _d3d10_D_Flush 70  
#define _d3d10_D_CreateBuffer 71  
#define _d3d10_D_CreateTexture1D 72  
#define _d3d10_D_CreateTexture2D 73  
#define _d3d10_D_CreateTexture3D 74  
#define _d3d10_D_CreateShaderResourceView 75  
#define _d3d10_D_CreateRenderTargetView 76  
#define _d3d10_D_CreateDepthStencilView 77  
#define _d3d10_D_CreateInputLayout 78  
#define _d3d10_D_CreateVertexShader 79  
#define _d3d10_D_CreateGeometryShader 80  
#define _d3d10_D_CreateGemoetryShaderWithStreamOutput 81  
#define _d3d10_D_CreatePixelShader 82 
#define _d3d10_D_CreateBlendState 83 
#define _d3d10_D_CreateDepthStencilState 84 
#define _d3d10_D_CreateRasterizerState 85 
#define _d3d10_D_CreateSamplerState 86 
#define _d3d10_D_CreateQuery 87 
#define _d3d10_D_CreatePredicate 88 
#define _d3d10_D_CreateCounter 89 
#define _d3d10_D_CheckFormatSupport 90 
#define _d3d10_D_CheckMultisampleQualityLevels 91 
#define _d3d10_D_CheckCounterInfo 92 
#define _d3d10_D_CheckCounter 93
#define _d3d10_D_GetCreationFlags 94 
#define _d3d10_D_OpenSharedResource 95 
#define _d3d10_D_SetTextFilterSize 96 
#define _d3d10_D_GetTextFilterSize 97 
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

	namespace d3d10 {
		static constexpr uint16_t nvDeviceFuns = 98;
		static std::array<void*, nvDeviceFuns> deviceVMT = { 0 };
		static constexpr uint16_t nvSwapchainFuns = 18;
		static std::array<void*, nvSwapchainFuns> swapchainVMT = { 0 };

		BOOL FillVMT() {

			DXGI_MODE_DESC bufferDesc;
			bufferDesc.Width												= 100;
			bufferDesc.Height												= 100;
			bufferDesc.RefreshRate.Numerator								= 60;
			bufferDesc.RefreshRate.Denominator								= 1;
			bufferDesc.Format												= DXGI_FORMAT_R8G8B8A8_UNORM;
			bufferDesc.ScanlineOrdering										= DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
			bufferDesc.Scaling												= DXGI_MODE_SCALING_UNSPECIFIED;

			DXGI_SWAP_CHAIN_DESC swapChainDesc;
			swapChainDesc.BufferDesc.Width = 100;
			swapChainDesc.BufferDesc.Height = 100;
			swapChainDesc.BufferDesc.RefreshRate.Numerator = 60;
			swapChainDesc.BufferDesc.RefreshRate.Denominator = 1;
			swapChainDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
			swapChainDesc.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
			swapChainDesc.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
			
			swapChainDesc.SampleDesc.Count = 1;
			swapChainDesc.SampleDesc.Quality = 0;

			swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			swapChainDesc.BufferCount = 1;
			swapChainDesc.OutputWindow = GetProcessWindow();

			swapChainDesc.Windowed = true;

			swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

			swapChainDesc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

			D3D_FEATURE_LEVEL featureLevel[] = {
				D3D_FEATURE_LEVEL_10_1,
				D3D_FEATURE_LEVEL_10_0,
				D3D_FEATURE_LEVEL_9_3,
				D3D_FEATURE_LEVEL_9_2,
				D3D_FEATURE_LEVEL_9_1
			};

			IDXGISwapChain* pDummySwapChain = nullptr;
			ID3D10Device* pDummyDevice = nullptr;
			D3D_FEATURE_LEVEL selectedFeatureLevel;


			HRESULT deviceResult = D3D10CreateDeviceAndSwapChain(
				nullptr, // Could fail here?
				D3D10_DRIVER_TYPE_HARDWARE,
				nullptr,
				0,
				D3D10_SDK_VERSION,
				&swapChainDesc,
				&pDummySwapChain,
				&pDummyDevice);

			if (deviceResult != S_OK || !pDummySwapChain || !pDummyDevice)
				return false;

			memcpy(deviceVMT.data(), *(void**)pDummyDevice, deviceVMT.size() * sizeof(void*));
			memcpy(swapchainVMT.data(), *(void**)pDummySwapChain, swapchainVMT.size() * sizeof(void*));


			pDummySwapChain->Release();
			pDummyDevice->Release();

			return true;

		}

	}
}