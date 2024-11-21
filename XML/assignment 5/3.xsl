<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="/">
		<html>
			<head>
				<title>Books information</title>
			</head>
			<body>
				<table border="1">
					<tr>
						<th>Title</th>
						<th>Author</th>
						<th>Year</th>
						<th>Publisher</th>
					</tr>
					<xsl:for-each select="Books/Book">
						<tr>
							<xsl:choose>
								<xsl:when test="Year &lt; 1998">
									<td><xsl:value-of select="@title"/></td>
									<td><xsl:value-of select="Author"/></td>
									<td><xsl:value-of select="Year"/></td>
									<td><xsl:value-of select="Publisher"/></td>
								</xsl:when>
							</xsl:choose>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>