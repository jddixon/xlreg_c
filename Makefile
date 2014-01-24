p.pb.go: p.proto
	protoc-c --c_out=./ p.proto
