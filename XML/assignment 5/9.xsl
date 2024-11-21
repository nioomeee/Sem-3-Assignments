<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="/">
		<html>
			<head>
				<title>Student details</title>
			</head>

			<body>
				<table border = "1">
					<tr>
						<th>Roll no</th>
						<th>Name</th>
						<th>Marks</th>
						<th>Rank</th>
						<th>Result</th>
					</tr>

					<xsl:for-each select="Students/Student[starts-with(Name, 'D')]">
						<tr>
							<td><xsl:value-of select="Roll_no"/></td>
							<td><xsl:value-of select="Name"/></td>
							<td><xsl:value-of select="Marks"/></td>
							<td><xsl:value-of select="Rank"/></td>
							<td><xsl:value-of select="Result"/></td>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>