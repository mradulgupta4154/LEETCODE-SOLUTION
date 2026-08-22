import re
import os

# Folders like "0001-two-sum" — count top-level dirs matching this pattern
pattern = re.compile(r'^\d{4}-')
root = '.'
count = sum(
    1 for name in os.listdir(root)
    if os.path.isdir(name) and pattern.match(name)
)

readme_path = "README.md"
with open(readme_path, "r") as f:
    content = f.read()

new_block = f"<!--START_SOLVED_COUNT-->\nSolved: {count} problems\n<!--END_SOLVED_COUNT-->"
content = re.sub(
    r"<!--START_SOLVED_COUNT-->.*?<!--END_SOLVED_COUNT-->",
    new_block,
    content,
    flags=re.DOTALL,
)

with open(readme_path, "w") as f:
    f.write(content)

print(f"Updated count: {count}")
