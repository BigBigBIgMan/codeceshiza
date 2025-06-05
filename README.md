# 代理抓包项目

这是一个Xcode项目，用于构建动态库(dylib)文件。

## 项目结构

- `654323.xcodeproj` - 主要的Xcode项目文件
- `BylibKjc/` - 源代码目录
- `模拟返回/` - 包含URL协议相关代码

## 自动构建

项目使用GitHub Actions进行自动构建：

- 当代码推送到`main`或`master`分支时自动触发构建
- 在macOS环境下使用Xcode编译
- 生成的dylib文件会作为Artifacts上传

## 本地构建

```bash
# 使用Xcode命令行工具构建
xcodebuild -project 654323.xcodeproj -configuration Release build
```

## 发布

创建Git标签时会自动创建GitHub Release并上传dylib文件：

```bash
git tag v1.0.0
git push origin v1.0.0
``` 