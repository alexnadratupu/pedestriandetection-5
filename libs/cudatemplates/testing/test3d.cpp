err |= test_array_copy2<Cuda::HostMemoryHeap<float, 3>, Cuda::HostMemoryHeap<double, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::HostMemoryHeap<double, 3>, Cuda::HostMemoryHeap<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::HostMemoryHeap<float, 3>, Cuda::HostMemoryHeap<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::HostMemoryHeap<float, 3>, Cuda::HostMemoryLocked<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::HostMemoryHeap<float, 3>, Cuda::DeviceMemoryLinear<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::HostMemoryHeap<float, 3>, Cuda::DeviceMemoryPitched<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::HostMemoryHeap<float, 3>, Cuda::Array<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::HostMemoryLocked<float, 3>, Cuda::HostMemoryHeap<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::HostMemoryLocked<float, 3>, Cuda::HostMemoryLocked<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::HostMemoryLocked<float, 3>, Cuda::DeviceMemoryLinear<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::HostMemoryLocked<float, 3>, Cuda::DeviceMemoryPitched<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::HostMemoryLocked<float, 3>, Cuda::Array<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::DeviceMemoryLinear<float, 3>, Cuda::HostMemoryHeap<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::DeviceMemoryLinear<float, 3>, Cuda::HostMemoryLocked<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::DeviceMemoryLinear<float, 3>, Cuda::DeviceMemoryLinear<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::DeviceMemoryLinear<float, 3>, Cuda::DeviceMemoryPitched<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::DeviceMemoryLinear<float, 3>, Cuda::Array<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::DeviceMemoryPitched<float, 3>, Cuda::HostMemoryHeap<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::DeviceMemoryPitched<float, 3>, Cuda::HostMemoryLocked<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::DeviceMemoryPitched<float, 3>, Cuda::DeviceMemoryLinear<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::DeviceMemoryPitched<float, 3>, Cuda::DeviceMemoryPitched<float, 3> >(size3a, size3b, pos3a, pos3b, size3, smax3);
err |= test_array_copy2<Cuda::DeviceMemoryPitched<float, 3>, Cuda::Array<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::Array<float, 3>, Cuda::HostMemoryHeap<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::Array<float, 3>, Cuda::HostMemoryLocked<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::Array<float, 3>, Cuda::DeviceMemoryLinear<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::Array<float, 3>, Cuda::DeviceMemoryPitched<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
err |= test_array_copy2<Cuda::Array<float, 3>, Cuda::Array<float, 3> >(size3a, size3b, pos3a, pos3b, size3, 0);
