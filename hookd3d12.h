#pragma once
#include <Windows.h>
#include <d3d12.h>
#include <dxgi1_2.h>
#include <array>

#pragma comment (lib,"d3d12.lib")
#pragma comment (lib, "dxgi1_2.lib")


#pragma region
#define _d3d12_D_QueryInterface 0   
#define _d3d12_D_AddRef 1   
#define _d3d12_D_Release 2   
#define _d3d12_D_GetPrivateData 3   
#define _d3d12_D_SetPrivateData 4   
#define _d3d12_D_SetPrivateDataInterface 5   
#define _d3d12_D_SetName 6   
#define _d3d12_D_GetNodeCount 7   
#define _d3d12_D_CreateCommandQueue 8   
#define _d3d12_D_CreateCommandAllocator 9   
#define _d3d12_D_CreateGraphicsPipelineState 10  
#define _d3d12_D_CreateComputePipelineState 11  
#define _d3d12_D_CreateCommandList 12  
#define _d3d12_D_CheckFeatureSupport 13  
#define _d3d12_D_CreateDescriptorHeap 14  
#define _d3d12_D_GetDescriptorHandleIncrementSize 15  
#define _d3d12_D_CreateRootSignature 16  
#define _d3d12_D_CreateConstantBufferView 17  
#define _d3d12_D_CreateShaderResourceView 18  
#define _d3d12_D_CreateUnorderedAccessView 19  
#define _d3d12_D_CreateRenderTargetView 20  
#define _d3d12_D_CreateDepthStencilView 21  
#define _d3d12_D_CreateSampler 22  
#define _d3d12_D_CopyDescriptors 23  
#define _d3d12_D_CopyDescriptorsSimple 24  
#define _d3d12_D_GetResourceAllocationInfo 25  
#define _d3d12_D_GetCustomHeapProperties 26  
#define _d3d12_D_CreateCommittedResource 27  
#define _d3d12_D_CreateHeap 28  
#define _d3d12_D_CreatePlacedResource 29  
#define _d3d12_D_CreateReservedResource 30  
#define _d3d12_D_CreateSharedHandle 31  
#define _d3d12_D_OpenSharedHandle 32  
#define _d3d12_D_OpenSharedHandleByName 33  
#define _d3d12_D_MakeResident 34  
#define _d3d12_D_Evict 35  
#define _d3d12_D_CreateFence 36  
#define _d3d12_D_GetDeviceRemovedReason 37  
#define _d3d12_D_GetCopyableFootprints 38  
#define _d3d12_D_CreateQueryHeap 39  
#define _d3d12_D_SetStablePowerState 40  
#define _d3d12_D_CreateCommandSignature 41  
#define _d3d12_D_GetResourceTiling 42  
#define _d3d12_D_GetAdapterLuid 43  


#define _d3d12_CQ_QueryInterface 0  
#define _d3d12_CQ_AddRef 1  
#define _d3d12_CQ_Release 2  
#define _d3d12_CQ_GetPrivateData 3  
#define _d3d12_CQ_SetPrivateData 4  
#define _d3d12_CQ_SetPrivateDataInterface 5  
#define _d3d12_CQ_SetName 6  
#define _d3d12_CQ_GetDevice 7  
#define _d3d12_CQ_UpdateTileMappings 8  
#define _d3d12_CQ_CopyTileMappings 9  
#define _d3d12_CQ_ExecuteCommandLists 10 
#define _d3d12_CQ_SetMarker 11 
#define _d3d12_CQ_BeginEvent 12 
#define _d3d12_CQ_EndEvent 13 
#define _d3d12_CQ_Signal 14 
#define _d3d12_CQ_Wait 15 
#define _d3d12_CQ_GetTimestampFrequency 16 
#define _d3d12_CQ_GetClockCalibration 17 
#define _d3d12_CQ_GetDesc 18 


#define _d3d12_CA_QueryInterface 0  
#define _d3d12_CA_AddRef 1  
#define _d3d12_CA_Release 2  
#define _d3d12_CA_GetPrivateData 3  
#define _d3d12_CA_SetPrivateData 4  
#define _d3d12_CA_SetPrivateDataInterface 5  
#define _d3d12_CA_SetName 6  
#define _d3d12_CA_GetDevice 7  
#define _d3d12_CA_Reset 8  
#define _d3d12_CL_QueryInterface 0  
#define _d3d12_CL_AddRef 1  
#define _d3d12_CL_Release 2  
#define _d3d12_CL_GetPrivateData 3  
#define _d3d12_CL_SetPrivateData 4  
#define _d3d12_CL_SetPrivateDataInterface 5  
#define _d3d12_CL_SetName 6  
#define _d3d12_CL_GetDevice 7  
#define _d3d12_CL_GetType 8  
#define _d3d12_CL_Close 9  
#define _d3d12_CL_Reset 10 
#define _d3d12_CL_ClearState 11 
#define _d3d12_CL_DrawInstanced 12 
#define _d3d12_CL_DrawIndexedInstanced 13 
#define _d3d12_CL_Dispatch 14 
#define _d3d12_CL_CopyBufferRegion 15 
#define _d3d12_CL_CopyTextureRegion 16 
#define _d3d12_CL_CopyResource 17 
#define _d3d12_CL_CopyTiles 18 
#define _d3d12_CL_ResolveSubresource 19 
#define _d3d12_CL_IASetPrimitiveTopology 20 
#define _d3d12_CL_RSSetViewports 21 
#define _d3d12_CL_RSSetScissorRects 22 
#define _d3d12_CL_OMSetBlendFactor 23 
#define _d3d12_CL_OMSetStencilRef 24 
#define _d3d12_CL_SetPipelineState 25 
#define _d3d12_CL_ResourceBarrier 26 
#define _d3d12_CL_ExecuteBundle 27 
#define _d3d12_CL_SetDescriptorHeaps 28 
#define _d3d12_CL_SetComputeRootSignature 29 
#define _d3d12_CL_SetGraphicsRootSignature 30 
#define _d3d12_CL_SetComputeRootDescriptorTable 31 
#define _d3d12_CL_SetGraphicsRootDescriptorTable 32 
#define _d3d12_CL_SetComputeRoot32BitConstant 33 
#define _d3d12_CL_SetGraphicsRoot32BitConstant 34 
#define _d3d12_CL_SetComputeRoot32BitConstants 35 
#define _d3d12_CL_SetGraphicsRoot32BitConstants 36 
#define _d3d12_CL_SetComputeRootConstantBufferView 37 
#define _d3d12_CL_SetGraphicsRootConstantBufferView 38 
#define _d3d12_CL_SetComputeRootShaderResourceView 39 
#define _d3d12_CL_SetGraphicsRootShaderResourceView 40 
#define _d3d12_CL_SetComputeRootUnorderedAccessView 41 
#define _d3d12_CL_SetGraphicsRootUnorderedAccessView 42 
#define _d3d12_CL_IASetIndexBuffer 43 
#define _d3d12_CL_IASetVertexBuffers 44 
#define _d3d12_CL_SOSetTargets 45 
#define _d3d12_CL_OMSetRenderTargets 46 
#define _d3d12_CL_ClearDepthStencilView 47 
#define _d3d12_CL_ClearRenderTargetView 48 
#define _d3d12_CL_ClearUnorderedAccessViewUint 49 
#define _d3d12_CL_ClearUnorderedAccessViewFloat 50 
#define _d3d12_CL_DiscardResource 51 
#define _d3d12_CL_BeginQuery 52 
#define _d3d12_CL_EndQuery 53 
#define _d3d12_CL_ResolveQueryData 54 
#define _d3d12_CL_SetPredication 55 
#define _d3d12_CL_SetMarker 56 
#define _d3d12_CL_BeginEvent 57 
#define _d3d12_CL_EndEvent 58 
#define _d3d12_CL_ExecuteIndirect 59 


#define _d3d12_SC_QueryInterface 0  
#define _d3d12_SC_AddRef 1  
#define _d3d12_SC_Release 2  
#define _d3d12_SC_SetPrivateData 3  
#define _d3d12_SC_SetPrivateDataInterface 4  
#define _d3d12_SC_GetPrivateData 5  
#define _d3d12_SC_GetParent 6  
#define _d3d12_SC_GetDevice 7  
#define _d3d12_SC_Present 8  
#define _d3d12_SC_GetBuffer 9  
#define _d3d12_SC_SetFullscreenState 10 
#define _d3d12_SC_GetFullscreenState 11 
#define _d3d12_SC_GetDesc 12 
#define _d3d12_SC_ResizeBuffers 13 
#define _d3d12_SC_ResizeTarget 14 
#define _d3d12_SC_GetContainingOutput 15 
#define _d3d12_SC_GetFrameStatistics 16 
#define _d3d12_SC_GetLastPresentCount 17 
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
		static constexpr uint16_t nvDeviceFuns = 44;
		static std::array<void*, nvDeviceFuns> deviceVMT = { 0 };
		static constexpr uint16_t nvCommandQueueFuns = 19;
		static std::array<void*, nvCommandQueueFuns> commandQueueVMT = { 0 };
		static constexpr uint16_t nvCommandAllocFuns = 9;
		static std::array<void*, nvCommandAllocFuns> commandAllocVMT = { 0 };
		static constexpr uint16_t nvCommandListFuns = 60;
		static std::array<void*, nvCommandListFuns> commandListVMT = { 0 };
		static constexpr uint16_t nvSwapchainFuns = 18;
		static std::array<void*, nvSwapchainFuns> swapchainVMT = { 0 };

		BOOL FillVMT() {


			IDXGIFactory* pDummyFactory = nullptr;
			ID3D12Device* pDummyDevice = nullptr;
			ID3D12CommandQueue* pDummyCommandQueue = nullptr;
			ID3D12CommandAllocator* pDummyCommandAllocator = nullptr;
			ID3D12CommandList* pDummyCommandList = nullptr;
			IDXGISwapChain* pDummySwapChain = nullptr;

			if (CreateDXGIFactory(__uuidof(IDXGIFactory), (void**)&pDummyFactory) != S_OK)
				return false;

			if (D3D12CreateDevice(nullptr, D3D_FEATURE_LEVEL_11_0, __uuidof(ID3D12Device), (void**)&pDummyDevice) != S_OK) {
				pDummyFactory->Release();
				return false;
			}

			D3D12_COMMAND_QUEUE_DESC queueDesc;
			queueDesc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
			queueDesc.Priority = 0;
			queueDesc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
			queueDesc.NodeMask = 0;

			if (pDummyDevice->CreateCommandQueue(&queueDesc, __uuidof(ID3D12CommandQueue), (void**)&pDummyCommandQueue) != S_OK) {
				pDummyFactory->Release();
				pDummyDevice->Release();
				return false;
			}

			if (pDummyDevice->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, __uuidof(ID3D12CommandAllocator), (void**)&pDummyCommandAllocator) != S_OK) {
				pDummyFactory->Release();
				pDummyDevice->Release();
				pDummyCommandQueue->Release();
				return false;
			}

			if (pDummyDevice->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, pDummyCommandAllocator, NULL, __uuidof(ID3D12GraphicsCommandList), (void**)&pDummyCommandList) != S_OK) {
				pDummyFactory->Release();
				pDummyDevice->Release();
				pDummyCommandQueue->Release();
				pDummyCommandAllocator->Release();
				return false;
			}



			DXGI_SWAP_CHAIN_DESC swapChainDesc = {};
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

			swapChainDesc.BufferCount = 2;
			swapChainDesc.OutputWindow = GetProcessWindow();

			swapChainDesc.Windowed = 1;

			swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;

			swapChainDesc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

			if (pDummyFactory->CreateSwapChain(pDummyDevice, &swapChainDesc, &pDummySwapChain) != S_OK) {
				pDummyFactory->Release();
				pDummyDevice->Release();
				pDummyCommandQueue->Release();
				pDummyCommandAllocator->Release();
				pDummyCommandList->Release();
				return false;
			}

			memcpy(deviceVMT.data(), *(void**)pDummyDevice, deviceVMT.size() * sizeof(void*));
			memcpy(swapchainVMT.data(), *(void**)pDummySwapChain, swapchainVMT.size() * sizeof(void*));
			memcpy(commandAllocVMT.data(), *(void**)pDummyCommandAllocator, commandAllocVMT.size() * sizeof(void*));
			memcpy(commandListVMT.data(), *(void**)pDummyCommandList, commandListVMT.size() * sizeof(void*));
			memcpy(commandQueueVMT.data(), *(void**)pDummyCommandQueue, commandQueueVMT.size() * sizeof(void*));

			pDummyFactory->Release();
			pDummySwapChain->Release();
			pDummyDevice->Release();
			pDummyCommandAllocator->Release();
			pDummyCommandQueue->Release();
			pDummyCommandList->Release();

			return true;
		}

	}
}