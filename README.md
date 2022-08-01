# GApisVtables
Library to extract function pointers for D3D APIs at runtime 

# How to use
Must have DirectX SDK installed. 
Call apihooks::yourtargetapi::FillVMT() and check for the return value.

```c++
	if (!apihooks::d3d11::FillVMT()) {
		MessageBoxA(0, "Failed to fill Vtables", "Failed.", MB_OK);
		return;
	}

	void* hookLocation = apihooks::d3d11::swapchainVMT[_d3d11_SC_Present];
```

It should theoretically work on both x86 and x64 processes but x86 support hasn't been tested.

 ~~For now it only supports D3D9 and D3D11 but I might add support for D3D10 and 12 later.~~  
 
 
Support for D3D APIs from 9 to 12.


# Issues 
If the functions offsets are wrong post an issue or contact me or fix it yourself you coward
