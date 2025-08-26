'''
Author: Kin Lielie jll18958891868@163.com
Date: 2025-08-25 20:47:26
LastEditors: Kin Lielie jll18958891868@163.com
LastEditTime: 2025-08-26 09:58:48
FilePath: \my_project\hello.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
words = ['python', 'ai', 'web', 'hello']
sorted_words = sorted(words, key=len)  # 按字符串长度排序
print(sorted_words)  # ['ai', 'web', 'hello', 'python']

# --- Better Comments 插件注释规范示例 ---

# ! 危险！请注意！
#   (用于标记风险、Bug、或需要立即关注的警告)

# ? 我不确定，需要确认。
#   (用于对不确定的代码逻辑提出疑问或寻求团队确认)

# TODO 未来需要做的事。
#   (用于标记未完成的功能、待优化的代码或临时方案)

# * 重点信息。 
#   (用于高亮解释关键的业务逻辑或算法思路)

# // 这是已废弃的代码。 -> 灰色并带有删除线
#   (用于清晰地标记出暂时不用或已废弃的代码行)

# 这是一个普通的注释。 -> 默认颜色
#   (用于一般的代码说明)

# FIXME 修复我

# BUG 这里有BUG