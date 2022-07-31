#pragma once
#include <Windows.h>
#include <d3d11.h>
#include <array>

#pragma comment (lib, "d3d11.lib")

#pragma region
#define _d3d11_SC_QueryInterface 0   
#define _d3d11_SC_AddRef 1   
#define _d3d11_SC_Release 2   
#define _d3d11_SC_SetPrivateData 3   
#define _d3d11_SC_SetPrivateDataInterface 4   
#define _d3d11_SC_GetPrivateData 5   
#define _d3d11_SC_GetParent 6   
#define _d3d11_SC_GetDevice 7   
#define _d3d11_SC_Present 8   
#define _d3d11_SC_GetBuffer 9   
#define _d3d11_SC_SetFullscreenState 10  
#define _d3d11_SC_GetFullscreenState 11  
#define _d3d11_SC_GetDesc 12  
#define _d3d11_SC_ResizeBuffers 13  
#define _d3d11_SC_ResizeTarget 14  
#define _d3d11_SC_GetContainingOutput 15  
#define _d3d11_SC_GetFrameStatistics 16  
#define _d3d11_SC_GetLastPresentCount 17  


#define _d3d11_D_QueryInterface 0
#define _d3d11_D_AddRef 1
#define _d3d11_D_Release 2
#define _d3d11_D_CreateBuffer 3  
#define _d3d11_D_CreateTexture1D 4  
#define _d3d11_D_CreateTexture2D 5  
#define _d3d11_D_CreateTexture3D 6  
#define _d3d11_D_CreateShaderResourceView 7  
#define _d3d11_D_CreateUnorderedAccessView 8  
#define _d3d11_D_CreateRenderTargetView 9  
#define _d3d11_D_CreateDepthStencilView 10  
#define _d3d11_D_CreateInputLayout 11  
#define _d3d11_D_CreateVertexShader 12  
#define _d3d11_D_CreateGeometryShader 13  
#define _d3d11_D_CreateGeometryShaderWithStreamOutput 14  
#define _d3d11_D_CreatePixelShader 15  
#define _d3d11_D_CreateHullShader 16  
#define _d3d11_D_CreateDomainShader 17  
#define _d3d11_D_CreateComputeShader 18  
#define _d3d11_D_CreateClassLinkage 19  
#define _d3d11_D_CreateBlendState 20  
#define _d3d11_D_CreateDepthStencilState 21  
#define _d3d11_D_CreateRasterizerState 22  
#define _d3d11_D_CreateSamplerState 23  
#define _d3d11_D_CreateQuery 24  
#define _d3d11_D_CreatePredicate 25  
#define _d3d11_D_CreateCounter 26  
#define _d3d11_D_CreateDeferredContext 27  
#define _d3d11_D_OpenSharedResource 28  
#define _d3d11_D_CheckFormatSupport 29  
#define _d3d11_D_CheckMultisampleQualityLevels 30  
#define _d3d11_D_CheckCounterInfo 31  
#define _d3d11_D_CheckCounter 32  
#define _d3d11_D_CheckFeatureSupport 33  
#define _d3d11_D_GetPrivateData 34  
#define _d3d11_D_SetPrivateData 35  
#define _d3d11_D_SetPrivateDataInterface 36  
#define _d3d11_D_GetFeatureLevel 37  
#define _d3d11_D_GetCreationFlags 38  
#define _d3d11_D_GetDeviceRemovedReason 39  
#define _d3d11_D_GetImmediateContext 40  
#define _d3d11_D_SetExceptionMode 41  
#define _d3d11_D_GetExceptionMode 42  


#define _d3d11_C_QueryInterface   0
#define _d3d11_C_AddRef   1
#define _d3d11_C_Release   2
#define _d3d11_C_GetDevice   3
#define _d3d11_C_GetPrivateData   4
#define _d3d11_C_SetPrivateData   5
#define _d3d11_C_SetPrivateDataInterface   6
#define _d3d11_C_SetConstantBuffers   7
#define _d3d11_C_SetShaderResources   8
#define _d3d11_C_SetShader   9
#define _d3d11_C_SetSamplers   10
#define _d3d11_C_SetShader   11
#define _d3d11_C_DrawIndexed   12
#define _d3d11_C_Draw   13
#define _d3d11_C_Map   14
#define _d3d11_C_Unmap   15
#define _d3d11_C_SetConstantBuffers   16
#define _d3d11_C_IASetInputLayout   17
#define _d3d11_C_IASetVertexBuffers   18
#define _d3d11_C_IASetIndexBuffer   19
#define _d3d11_C_DrawIndexedInstanced   20
#define _d3d11_C_DrawInstanced   21
#define _d3d11_C_SetConstantBuffers   22
#define _d3d11_C_SetShader   23
#define _d3d11_C_IASetPrimitiveTopology   24
#define _d3d11_C_SetShaderResources   25
#define _d3d11_C_SetSamplers   26
#define _d3d11_C_Begin   27
#define _d3d11_C_End   28
#define _d3d11_C_GetData   29
#define _d3d11_C_SetPredication   30
#define _d3d11_C_SetShaderResources   31
#define _d3d11_C_SetSamplers   32
#define _d3d11_C_OMSetRenderTargets   33
#define _d3d11_C_OMSetRenderTargetsAndUnorderedAccessViews   34
#define _d3d11_C_OMSetBlendState   35
#define _d3d11_C_OMSetDepthStencilState   36
#define _d3d11_C_SOSetTargets   37
#define _d3d11_C_DrawAuto   38
#define _d3d11_C_DrawIndexedInstancedIndirect   39
#define _d3d11_C_DrawInstancedIndirect   40
#define _d3d11_C_Dispatch   41
#define _d3d11_C_DispatchIndirect   42
#define _d3d11_C_RSSetState   43
#define _d3d11_C_RSSetViewports   44
#define _d3d11_C_RSSetScissorRects   45
#define _d3d11_C_CopySubresourceRegion   46
#define _d3d11_C_CopyResource   47
#define _d3d11_C_UpdateSubresource   48
#define _d3d11_C_CopyStructureCount   49
#define _d3d11_C_ClearRenderTargetView   50
#define _d3d11_C_ClearUnorderedAccessViewUint   51
#define _d3d11_C_ClearUnorderedAccessViewFloat   52
#define _d3d11_C_ClearDepthStencilView   53
#define _d3d11_C_GenerateMips   54
#define _d3d11_C_SetResourceMinLOD   55
#define _d3d11_C_GetResourceMinLOD   56
#define _d3d11_C_ResolveSubresource   57
#define _d3d11_C_ExecuteCommandList   58
#define _d3d11_C_SetShaderResources   59
#define _d3d11_C_SetShader   60
#define _d3d11_C_SetSamplers   61
#define _d3d11_C_SetConstantBuffers   62
#define _d3d11_C_SetShaderResources   63
#define _d3d11_C_SetShader   64
#define _d3d11_C_SetSamplers   65
#define _d3d11_C_SetConstantBuffers   66
#define _d3d11_C_SetShaderResources   67
#define _d3d11_C_CSSetUnorderedAccessViews   68
#define _d3d11_C_SetShader   69
#define _d3d11_C_SetSamplers   70
#define _d3d11_C_SetConstantBuffers   71
#define _d3d11_C_VSGetConstantBuffers   72
#define _d3d11_C_PSGetShaderResources   73
#define _d3d11_C_PSGetShader   74
#define _d3d11_C_PSGetSamplers   75
#define _d3d11_C_VSGetShader   76
#define _d3d11_C_PSGetConstantBuffers   77
#define _d3d11_C_IAGetInputLayout   78
#define _d3d11_C_IAGetVertexBuffers   79
#define _d3d11_C_IAGetIndexBuffer   80
#define _d3d11_C_GSGetConstantBuffers   81
#define _d3d11_C_GSGetShader   82
#define _d3d11_C_IAGetPrimitiveTopology   83
#define _d3d11_C_VSGetShaderResources   84
#define _d3d11_C_VSGetSamplers   85
#define _d3d11_C_GetPredication   86
#define _d3d11_C_GSGetShaderResources   87
#define _d3d11_C_GSGetSamplers   88
#define _d3d11_C_OMGetRenderTargets   89
#define _d3d11_C_OMGetRenderTargetsAndUnorderedAccessViews   90
#define _d3d11_C_OMGetBlendState   91
#define _d3d11_C_OMGetDepthStencilState   92
#define _d3d11_C_SOGetTargets   93
#define _d3d11_C_RSGetState   94
#define _d3d11_C_RSGetViewports   95
#define _d3d11_C_RSGetScissorRects   96
#define _d3d11_C_HSGetShaderResources   97
#define _d3d11_C_HSGetShader   98
#define _d3d11_C_HSGetSamplers   99
#define _d3d11_C_HSGetConstantBuffers   100
#define _d3d11_C_DSGetShaderResources   101
#define _d3d11_C_DSGetShader   102
#define _d3d11_C_DSGetSamplers   103
#define _d3d11_C_DSGetConstantBuffers   104
#define _d3d11_C_CSGetShaderResources   105
#define _d3d11_C_CSGetUnorderedAccessViews   106
#define _d3d11_C_CSGetShader   107
#define _d3d11_C_CSGetSamplers   108
#define _d3d11_C_CSGetConstantBuffers   109
#define _d3d11_C_ClearState   110
#define _d3d11_C_Flush   111
#define _d3d11_C_GetType   112
#define _d3d11_C_GetContextFlags   113
#define _d3d11_C_FinishCommandList   114

#pragma endregion

#include <iostream>
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

	namespace d3d11 {
		static constexpr uint16_t nvDeviceFuns = 43;
		static std::array<void*, nvDeviceFuns> deviceVMT = { 0 };
		static constexpr uint16_t nvContextFuns = 115;
		static std::array<void*, nvContextFuns> contextVMT = { 0 };
		static constexpr uint16_t nvSwapchainFuns = 18;
		static std::array<void*, nvSwapchainFuns> swapchainVMT = { 0 };

		BOOL FillVMT() {
			DXGI_SWAP_CHAIN_DESC swapchainDesc = { 0 };

			swapchainDesc.BufferDesc.RefreshRate.Numerator = 1;
			swapchainDesc.BufferDesc.RefreshRate.Denominator = 60;

			swapchainDesc.BufferDesc.Format = DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM;
			swapchainDesc.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER::DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
			swapchainDesc.BufferDesc.Scaling = DXGI_MODE_SCALING::DXGI_MODE_SCALING_UNSPECIFIED;

			swapchainDesc.SampleDesc.Count = 1;
			swapchainDesc.SampleDesc.Quality = 0;

			swapchainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			swapchainDesc.BufferCount = 1;
			swapchainDesc.OutputWindow = GetProcessWindow();

			swapchainDesc.Windowed = true;

			swapchainDesc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

			swapchainDesc.Flags = 0;

			D3D_FEATURE_LEVEL featureLevel[] = {
				D3D_FEATURE_LEVEL_11_0,
				D3D_FEATURE_LEVEL_10_1,
				D3D_FEATURE_LEVEL_10_0,
				D3D_FEATURE_LEVEL_9_3,
				D3D_FEATURE_LEVEL_9_2,
				D3D_FEATURE_LEVEL_9_1
			};
			
			IDXGISwapChain* pDummySwapChain = nullptr;
			ID3D11Device* pDummyDevice = nullptr;
			ID3D11DeviceContext* pDummyContext = nullptr;
			D3D_FEATURE_LEVEL selectedFeatureLevel;


			HRESULT deviceResult = D3D11CreateDeviceAndSwapChain(
				nullptr,
				D3D_DRIVER_TYPE_HARDWARE,
				NULL,
				D3D11_CREATE_DEVICE_SINGLETHREADED | D3D11_CREATE_DEVICE_BGRA_SUPPORT,
				featureLevel,
				ARRAYSIZE(featureLevel),
				D3D11_SDK_VERSION,
				&swapchainDesc,
				&pDummySwapChain,
				&pDummyDevice,
				&selectedFeatureLevel,
				&pDummyContext
			);

			if (deviceResult != S_OK || !pDummySwapChain || !pDummyDevice || !pDummyContext)
				return false;

			memcpy(deviceVMT.data(), *(void**)pDummyDevice, deviceVMT.size()*sizeof(void*));
			memcpy(contextVMT.data(), *(void**)pDummyContext, contextVMT.size()*sizeof(void*));
			memcpy(swapchainVMT.data(), *(void**)pDummySwapChain, swapchainVMT.size()*sizeof(void*));
			

			pDummySwapChain->Release();
			pDummyDevice->Release();
			pDummyContext->Release();

			return true;

		}

	}
}